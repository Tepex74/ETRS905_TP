#include <stdint.h>
#include <stdio.h>
#include "timer.h"
#include "ONEWIRE.h"
#include "DS18B20.h"
#include "GPIO.h"

float DS18B20_GetTemperature(ONEWIRE_PINOUT* onewire_Pinout){

	uint8_t component = 0;
	uint8_t temperature = 0;

	GPIO_Pullup(GPIOA, 8);

	component = ONEWIRE_Reset(onewire_Pinout);

	if(component == 1){

		printf("Component detected on the bus!\n\r");
		printf("Temperature conversion begin!\n\r");

		ONEWIRE_WriteByte(onewire_Pinout,0xCC);
		ONEWIRE_WriteByte(onewire_Pinout,0x44);
		SYSTICK_Delay(10);

		ONEWIRE_WriteByte(onewire_Pinout,0xCC);
		ONEWIRE_WriteByte(onewire_Pinout,0xBE);

		//LSB send
		temperature = ONEWIRE_ReadByte(onewire_Pinout);

		//MSB send
		//temperature |= (ONEWIRE_ReadByte()<<8);

		printf("Conversion done!\n\r");
	}
	else{
		printf("Component not detected\n\r");
	}
	GPIO_Nopull(GPIOA, 8);
	return (float)temperature/4;
}
