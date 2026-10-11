#ifndef _ONEWIRE_H_
#define _ONEWIRE_H_

#include <stdint.h>
#include <stm32f446xx.h>

typedef struct{
	GPIO_TypeDef	*port;
	uint16_t		pin;
}ONEWIRE_PINOUT;

uint8_t ONEWIRE_Reset(ONEWIRE_PINOUT* onewire_Pinout);

void ONEWIRE_WriteByte(ONEWIRE_PINOUT* onewire_Pinout, uint8_t data);

uint8_t ONEWIRE_ReadByte(ONEWIRE_PINOUT* onewire_Pinout);

#endif
