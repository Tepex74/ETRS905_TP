#ifndef _SPI__H_
#define _SPI__H_

#include <stdint.h>
#include <stm32f446xx.h>

#include "gpio.h"

uint8_t SPI1_TransmitReceive(uint8_t spiData);

void SPI1_ResetSS(void);

void SPI1_SetSS(void);

#endif
