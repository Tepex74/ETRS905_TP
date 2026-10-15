################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (14.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Lib/Protocols/I2C/I2C.c 

OBJS += \
./Lib/Protocols/I2C/I2C.o 

C_DEPS += \
./Lib/Protocols/I2C/I2C.d 


# Each subdirectory must supply rules for building sources it contributes
Lib/Protocols/I2C/%.o Lib/Protocols/I2C/%.su Lib/Protocols/I2C/%.cyclo: ../Lib/Protocols/I2C/%.c Lib/Protocols/I2C/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F446RETx -c -I"C:/Users/Depierre Alan.DESKTOP-OSF3G3T/STM32CubeIDE/workspace_2.1.0/ETRS905_TP/Inc" -I"C:/Users/Depierre Alan.DESKTOP-OSF3G3T/STM32CubeIDE/workspace_2.1.0/ETRS905_TP/Lib/Components/DS18B20" -I"C:/Users/Depierre Alan.DESKTOP-OSF3G3T/STM32CubeIDE/workspace_2.1.0/ETRS905_TP/Lib/Protocols/I2C" -I"C:/Users/Depierre Alan.DESKTOP-OSF3G3T/STM32CubeIDE/workspace_2.1.0/ETRS905_TP/Lib/Protocols/ONEWIRE" -I"C:/Users/Depierre Alan.DESKTOP-OSF3G3T/STM32CubeIDE/workspace_2.1.0/ETRS905_TP/Lib/Protocols/SPI" -I"C:/Users/Depierre Alan.DESKTOP-OSF3G3T/STM32CubeIDE/workspace_2.1.0/ETRS905_TP/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"C:/Users/Depierre Alan.DESKTOP-OSF3G3T/STM32CubeIDE/workspace_2.1.0/ETRS905_TP/Drivers/CMSIS/Include" -I"C:/Users/Depierre Alan.DESKTOP-OSF3G3T/STM32CubeIDE/workspace_2.1.0/ETRS905_TP/Lib/Components/SX1272" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Lib-2f-Protocols-2f-I2C

clean-Lib-2f-Protocols-2f-I2C:
	-$(RM) ./Lib/Protocols/I2C/I2C.cyclo ./Lib/Protocols/I2C/I2C.d ./Lib/Protocols/I2C/I2C.o ./Lib/Protocols/I2C/I2C.su

.PHONY: clean-Lib-2f-Protocols-2f-I2C

