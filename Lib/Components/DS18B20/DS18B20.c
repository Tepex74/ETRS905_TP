#include <ONEWIRE.h>
#include <DS18B20.h>

float DS18B20_GetTemperature(ONEWIRE_PINOUT* onewire_Pinout){

	uint8_t component = 0;
	uint8_t temperature = 0;

	component = ONEWIRE_Reset();

	if(component == 1){

		printf("Component detected on the bus!\n\r");
		printf("Temperature conversion begin!\n\r");

		ONEWIRE_Writebyte(0xCC);
		ONEWIRE_Writebyte(0x44);
		delay_ms(10);

		ONEWIRE_Writebyte(0xCC);
		ONEWIRE_Writebyte(0xBE);

		//LSB send
		temperature = ONEWIRE_ReadByte();

		//MSB send
		//temperature |= (ONEWIRE_ReadByte()<<8);

		printf("Conversion done!\n\r");

		return (float)temperature/4;
	}
	else{
		printf("Component not detected\n\r");
	}
}
