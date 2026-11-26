################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (14.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Lib/Components/DS18B20/DS18B20.c 

OBJS += \
./Lib/Components/DS18B20/DS18B20.o 

C_DEPS += \
./Lib/Components/DS18B20/DS18B20.d 


# Each subdirectory must supply rules for building sources it contributes
Lib/Components/DS18B20/%.o Lib/Components/DS18B20/%.su Lib/Components/DS18B20/%.cyclo: ../Lib/Components/DS18B20/%.c Lib/Components/DS18B20/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F446RETx -c -I"C:/Users/Depierre Alan.DESKTOP-OSF3G3T/STM32CubeIDE/workspace_2.1.0/ETRS905_TP/Inc" -I"C:/Users/Depierre Alan.DESKTOP-OSF3G3T/STM32CubeIDE/workspace_2.1.0/ETRS905_TP/Lib/Components/DS18B20" -I"C:/Users/Depierre Alan.DESKTOP-OSF3G3T/STM32CubeIDE/workspace_2.1.0/ETRS905_TP/Lib/Protocols/I2C" -I"C:/Users/Depierre Alan.DESKTOP-OSF3G3T/STM32CubeIDE/workspace_2.1.0/ETRS905_TP/Lib/Protocols/ONEWIRE" -I"C:/Users/Depierre Alan.DESKTOP-OSF3G3T/STM32CubeIDE/workspace_2.1.0/ETRS905_TP/Lib/Protocols/SPI" -I"C:/Users/Depierre Alan.DESKTOP-OSF3G3T/STM32CubeIDE/workspace_2.1.0/ETRS905_TP/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"C:/Users/Depierre Alan.DESKTOP-OSF3G3T/STM32CubeIDE/workspace_2.1.0/ETRS905_TP/Drivers/CMSIS/Include" -I"C:/Users/Depierre Alan.DESKTOP-OSF3G3T/STM32CubeIDE/workspace_2.1.0/ETRS905_TP/Lib/Components/SX1272" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -ftls-model=local-exec -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Lib-2f-Components-2f-DS18B20

clean-Lib-2f-Components-2f-DS18B20:
	-$(RM) ./Lib/Components/DS18B20/DS18B20.cyclo ./Lib/Components/DS18B20/DS18B20.d ./Lib/Components/DS18B20/DS18B20.o ./Lib/Components/DS18B20/DS18B20.su

.PHONY: clean-Lib-2f-Components-2f-DS18B20

