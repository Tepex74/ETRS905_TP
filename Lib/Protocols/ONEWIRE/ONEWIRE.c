#include <stdint.h>
#include <stm32f446xx.h>
#include "GPIO.h"
#include "TIMER.h"
#include "ONEWIRE.h"

static void    ONEWIRE_Writebit0(ONEWIRE_PINOUT* onewire_Pinout);
static void    ONEWIRE_Writebit1(ONEWIRE_PINOUT* onewire_Pinout);
static uint8_t ONEWIRE_Readbit(ONEWIRE_PINOUT* onewire_Pinout);

uint8_t ONEWIRE_Reset(ONEWIRE_PINOUT* onewire_Pinout){

	uint8_t presence = 3;

	GPIO_ResetPin(onewire_Pinout->port,onewire_Pinout->pin);
	delay_us(480);

	GPIO_SetPin(onewire_Pinout->port,onewire_Pinout->pin);
	delay_us(70);

	presence = GPIO_ReadPin(onewire_Pinout->port,onewire_Pinout->pin);
	delay_us(410);

	if(presence == 0){
		presence = 1;
	}
	else{
		presence = 0;
	}
	return presence;
}

void ONEWIRE_WriteByte(ONEWIRE_PINOUT* onewire_Pinout, uint8_t data){

	uint16_t ibcl = 0;

	for (ibcl = 0; ibcl<8; ibcl++){
		if((data & (1<<ibcl))==1){
			ONEWIRE_Writebit1(onewire_Pinout);
		}
		else{
			ONEWIRE_Writebit0(onewire_Pinout);
		}
	}
}

uint8_t ONEWIRE_ReadByte(ONEWIRE_PINOUT* onewire_Pinout){

	uint8_t byte = 0;

	for(uint8_t ibcl = 0; ibcl < 8; ibcl++){
		if(ONEWIRE_Readbit(onewire_Pinout)){
			byte |= (1 << ibcl);
		}
	}
	return byte;
}

////////////////////////////////////////////////////////////////////////////

//-------------------------- Static functions ----------------------------//

////////////////////////////////////////////////////////////////////////////

static void ONEWIRE_Writebit0(ONEWIRE_PINOUT* onewire_Pinout){
	GPIO_ResetPin(onewire_Pinout->port,onewire_Pinout->pin);
	delay_us(60);
	GPIO_SetPin(onewire_Pinout->port,onewire_Pinout->pin);
	delay_us(10);
}

static void ONEWIRE_Writebit1(ONEWIRE_PINOUT* onewire_Pinout){
	GPIO_ResetPin(onewire_Pinout->port,onewire_Pinout->pin);
	delay_us(6);
	GPIO_SetPin(onewire_Pinout->port,onewire_Pinout->pin);
	delay_us(64);
}

static uint8_t ONEWIRE_Readbit(ONEWIRE_PINOUT* onewire_Pinout){
	uint8_t state = 0;
	GPIO_ResetPin(onewire_Pinout->port,onewire_Pinout->pin);
	delay_us(6);
	GPIO_SetPin(onewire_Pinout->port,onewire_Pinout->pin);
	delay_us(9);
	state = GPIO_ReadPin(onewire_Pinout->port,onewire_Pinout->pin);
	delay_us(55);
	return state;
}
