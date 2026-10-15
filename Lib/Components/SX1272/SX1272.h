#ifndef _SX1272__H_
#define _SX1272__H_

#include <stdio.h>
#include <stdint.h>

void SX1272_WriteReg(uint8_t regAddr, uint8_t regData);

uint8_t SX1272_ReadReg(uint8_t regAddr);

#endif
