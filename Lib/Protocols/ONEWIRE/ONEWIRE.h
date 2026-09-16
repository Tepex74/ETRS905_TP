#ifndef _ONEWIRE_H_
#define _ONEWIRE_H_

typedef struct{
	GPIO_Typedef*	port;
	uint16_t		pin;
}ONEWIRE_PINOUT;

uint8_t ONEWIRE_Reset(ONEWIRE_PINOUT* onewire_Pinout);

void ONEWIRE_WriteByte(ONEWIRE_PINOUT* onewire_Pinout, uint8_t data);

uint8_t ONEWIRE_ReadByte(ONEWIRE_PINOUT* onewire_Pinout);

static void ONEWIRE_Writebit0(ONEWIRE_PINOUT* onewire_Pinout);

static void ONEWIRE_Writebit1(ONEWIRE_PINOUT* onewire_Pinout);

static uint8_t ONEWIRE_Readbit(ONEWIRE_PINOUT* onewire_Pinout);

#endif
