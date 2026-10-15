#include "SPI.h"
#include "SX1272.h"

void SX1272_WriteReg(uint8_t regAddr, uint8_t regData){
	SPI1_ResetSS();
	SPI1_TransmitReceive(regAddr | 0x80);
	SPI1_TransmitReceive(regData);
	SPI1_SetSS();
}

uint8_t SX1272_ReadReg(uint8_t regAddr){
	uint8_t answer = 0;
	SPI1_ResetSS();
	SPI1_TransmitReceive(regAddr | 0x80);
	answer = SPI1_TransmitReceive(0x77);
	SPI1_SetSS();
	return answer;
}
