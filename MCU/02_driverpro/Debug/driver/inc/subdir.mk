################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../driver/inc/stm32f411x_driver_uart.c 

OBJS += \
./driver/inc/stm32f411x_driver_uart.o 

C_DEPS += \
./driver/inc/stm32f411x_driver_uart.d 


# Each subdirectory must supply rules for building sources it contributes
driver/inc/%.o driver/inc/%.su: ../driver/inc/%.c driver/inc/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DNUCLEO_F411RE -DSTM32 -DSTM32F4 -DSTM32F411RETx -c -I"C:/Users/PHY202209EF15/STM32CubeIDE/workspace_1.10.1/02_driverpro/driver/inc" -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-driver-2f-inc

clean-driver-2f-inc:
	-$(RM) ./driver/inc/stm32f411x_driver_uart.d ./driver/inc/stm32f411x_driver_uart.o ./driver/inc/stm32f411x_driver_uart.su

.PHONY: clean-driver-2f-inc

