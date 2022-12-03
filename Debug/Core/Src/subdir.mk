################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/current_sensor.c \
../Core/Src/dma.c \
../Core/Src/drv8220.c \
../Core/Src/encoder.c \
../Core/Src/main.c \
../Core/Src/nanomodbus.c \
../Core/Src/ntc.c \
../Core/Src/observer.c \
../Core/Src/pot.c \
../Core/Src/stm32f1xx_hal_msp.c \
../Core/Src/stm32f1xx_it.c \
../Core/Src/syscalls.c \
../Core/Src/sysmem.c \
../Core/Src/system_stm32f1xx.c \
../Core/Src/vibrator.c 

OBJS += \
./Core/Src/current_sensor.o \
./Core/Src/dma.o \
./Core/Src/drv8220.o \
./Core/Src/encoder.o \
./Core/Src/main.o \
./Core/Src/nanomodbus.o \
./Core/Src/ntc.o \
./Core/Src/observer.o \
./Core/Src/pot.o \
./Core/Src/stm32f1xx_hal_msp.o \
./Core/Src/stm32f1xx_it.o \
./Core/Src/syscalls.o \
./Core/Src/sysmem.o \
./Core/Src/system_stm32f1xx.o \
./Core/Src/vibrator.o 

C_DEPS += \
./Core/Src/current_sensor.d \
./Core/Src/dma.d \
./Core/Src/drv8220.d \
./Core/Src/encoder.d \
./Core/Src/main.d \
./Core/Src/nanomodbus.d \
./Core/Src/ntc.d \
./Core/Src/observer.d \
./Core/Src/pot.d \
./Core/Src/stm32f1xx_hal_msp.d \
./Core/Src/stm32f1xx_it.d \
./Core/Src/syscalls.d \
./Core/Src/sysmem.d \
./Core/Src/system_stm32f1xx.d \
./Core/Src/vibrator.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/%.o Core/Src/%.su: ../Core/Src/%.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I"/home/mohamed/Documents/work/FW_Project/Rehandelton/Core/Inc" -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-Src

clean-Core-2f-Src:
	-$(RM) ./Core/Src/current_sensor.d ./Core/Src/current_sensor.o ./Core/Src/current_sensor.su ./Core/Src/dma.d ./Core/Src/dma.o ./Core/Src/dma.su ./Core/Src/drv8220.d ./Core/Src/drv8220.o ./Core/Src/drv8220.su ./Core/Src/encoder.d ./Core/Src/encoder.o ./Core/Src/encoder.su ./Core/Src/main.d ./Core/Src/main.o ./Core/Src/main.su ./Core/Src/nanomodbus.d ./Core/Src/nanomodbus.o ./Core/Src/nanomodbus.su ./Core/Src/ntc.d ./Core/Src/ntc.o ./Core/Src/ntc.su ./Core/Src/observer.d ./Core/Src/observer.o ./Core/Src/observer.su ./Core/Src/pot.d ./Core/Src/pot.o ./Core/Src/pot.su ./Core/Src/stm32f1xx_hal_msp.d ./Core/Src/stm32f1xx_hal_msp.o ./Core/Src/stm32f1xx_hal_msp.su ./Core/Src/stm32f1xx_it.d ./Core/Src/stm32f1xx_it.o ./Core/Src/stm32f1xx_it.su ./Core/Src/syscalls.d ./Core/Src/syscalls.o ./Core/Src/syscalls.su ./Core/Src/sysmem.d ./Core/Src/sysmem.o ./Core/Src/sysmem.su ./Core/Src/system_stm32f1xx.d ./Core/Src/system_stm32f1xx.o ./Core/Src/system_stm32f1xx.su ./Core/Src/vibrator.d ./Core/Src/vibrator.o ./Core/Src/vibrator.su

.PHONY: clean-Core-2f-Src

