################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../driver/src/stm32f411x_drive_uart.c 

OBJS += \
./driver/src/stm32f411x_drive_uart.o 

C_DEPS += \
./driver/src/stm32f411x_drive_uart.d 


# Each subdirectory must supply rules for building sources it contributes
driver/src/%.o driver/src/%.su: ../driver/src/%.c driver/src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DNUCLEO_F411RE -DSTM32 -DSTM32F4 -DSTM32F411RETx -c -I"C:/Users/PHY202209EF15/STM32CubeIDE/workspace_1.10.1/02_driverpro/driver/inc" -I../Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-driver-2f-src

clean-driver-2f-src:
	-$(RM) ./driver/src/stm32f411x_drive_uart.d ./driver/src/stm32f411x_drive_uart.o ./driver/src/stm32f411x_drive_uart.su

.PHONY: clean-driver-2f-src

