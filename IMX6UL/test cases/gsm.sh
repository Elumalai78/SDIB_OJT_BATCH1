#!/bin/sh
#qmicli --device=/dev/cdc-wdm0 --device-open-proxy --wds-start-network="ip-type=4,apn=airtelgprs.com" --client-no-release-cid

# TODO add failed time to reconnect
#     qmicli -v -d /dev/cdc-wdm0 --dms-set-operating-mode=online
#      qmicli -v -d /dev/cdc-wdm0 --dms-reset
###
# This script automate the setup of QMI supported wwan devices.
#
# Tested on following environment:
#   * Lenovo ThinkPad X220 (4286-CTO)
#   * Gentoo/Linux, Linux Kernel 3.9.6
#   * NTT Docomo UIM card (Xi LTE SIM)
#   * Sierra Wireless, Inc. Gobi 3000 wireless wan module
#     (FRU 60Y3257, vendor and device id is 1199:9013)
#     memo:
#       I recommend to check if your wwan module works fine
#       for your mobile broadband provider with Windows
#       especially if you imported the device from other country.
#       You may have to initialize your device for your region.
#   * Required kernel config (other modules may be also required):
#     - qmi_wwan (CONFIG_USB_NET_QMI_WWAN)
#     - qcserial (CONFIG_USB_SERIAL_QUALCOMM)
#   * Required settings:
#     - you may have to create /etc/qmi-network.conf.
#       My qmi-network.conf has only a line "APN=mopera.net".
#

# your wwan device name created by qmi_wwan kernel module
# check it with "ip a" or "ifconfig -a". it may be wwan0?
WWAN_DEV=wwan0
# your cdc_wdm modem location
CDC_WDM=/dev/cdc-wdm0
# this script uses following qmi commands
QMICLI=/usr/bin/qmicli
QMI_NETWORK=/usr/bin/qmi-network
#QMICLI="/usr/local/bin/qmicli"
#QMI_NETWORK="/usr/local/bin/qmi-network"
# the places of following commands vary depending on your distribution
IFCONFIG=/sbin/ifconfig
DHCPCD=/sbin/udhcpc
SUDO='/usr/bin/su -c'
RESET_CMD="resetusb"
CHECK_INTERVAL=1
DEBUG_FLAG=0


reset_device() {
    echo "reset the ${CDC_WDM}"
    str=$(lsusb | grep Qualcomm)
    num1=$(echo "${str}" | cut -d ' ' -f 2)
    num2_tmp=$(echo "${str}" | cut -d ' ' -f 4)
    num2=$(echo ${num2_tmp} | cut -d ':' -f 1)
    echo $num1 $num2
    
    #$RESET_CMD /dev/bus/usb/${num1}/${num2}
    
    echo '2-1'> /sys/bus/usb/drivers/usb/unbind
    echo '2-1'> /sys/bus/usb/drivers/usb/bind
}

qmi_start () {
#    reset_device
    sleep 2
    $COMMAND_PREFIX $IFCONFIG $WWAN_DEV down
    echo Y > /sys/class/net/wwan0/qmi/raw_ip 
    
    $COMMAND_PREFIX $IFCONFIG $WWAN_DEV up

    #sleep 5
  
    $COMMAND_PREFIX $QMICLI -d $CDC_WDM  --dms-set-operating-mode=online  

    if [ $? -ne 0 ]; then
	echo "your wwan device may be RFKilled?"
#	exit 1
    else
    	$COMMAND_PREFIX $QMI_NETWORK $CDC_WDM start
    	$COMMAND_PREFIX $DHCPCD -i $WWAN_DEV &
    fi
    
}

qmi_stop (){
    $COMMAND_PREFIX $QMI_NETWORK $CDC_WDM stop
    $COMMAND_PREFIX killall udhcpc 
    $COMMAND_PREFIX $IFCONFIG $WWAN_DEV down
}

qmi_strength () {
    dbm=`$COMMAND_PREFIX $QMICLI -d $CDC_WDM --nas-get-signal-strength | tr "'" " " | grep Network | head -1 | awk '{print $4}'`
    echo -n "Signal strength is "
    if [ $dbm -ge -73 ]; then
	echo -n 'Excellent'
    elif [ $dbm -ge -83 ]; then
	echo -n 'Good'
    elif [ $dbm -ge -93 ]; then
	echo -n 'OK'
    elif [ $dbm -ge -109 ]; then
	echo -n 'Marginal'
    else
	echo Unknown
    fi
    echo " (${dbm} dBm)"
}

qmi_status () {
    $COMMAND_PREFIX $QMI_NETWORK $CDC_WDM status
    qmi_strength
}


## check permission
if [ `whoami` != 'root' ]
then
    echo "warning: root permission required. setting command prefix to 'sudo'."
	 
    COMMAND_PREFIX=$SUDO
fi


sleep 15
echo "\$GPS_START" > /dev/ttyUSB1
echo "test redial"
TEST_URL="www.google.com"
RETRY_NUM=1
FAIL_TIME=1


while true; do
    if [ -e ${CDC_WDM} ];then
        parameter="-I ${WWAN_DEV} ${TEST_URL} -c 1"
        
        ping ${parameter} > /dev/null 2>&1
        result=$?

        if [ $DEBUG_FLAG -lt 0 ];then
            echo "result :: ${result}"
            echo "run cmd :: ping " ${parameter}
        fi

        if [ ${result} == 0 ];then
            echo "--------connected-------"
            

        elif [ ${result} != 0 ];then
            echo "--------discconnected-------"
            if [ $FAIL_TIME -lt $RETRY_NUM ];then
                FAIL_TIME=$((FAIL_TIME + 1))
                echo "fail count : " $FAIL_TIME 
            else
                FAIL_TIME=1
                echo "redial at once"
                qmi_stop
		qmi_start
            fi
        fi
    else
        echo "Not exist"
    fi
    sleep  ${CHECK_INTERVAL}
done
