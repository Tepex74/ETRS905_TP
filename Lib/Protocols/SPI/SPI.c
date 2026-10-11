#include <stdint.h>
#include <stm32f446xx.h>

#include "stm32f4xx_hal.h"
#include "gpio.h"

SPI_HandleTypeDef hspi1;

void SPI1_Init(void){
	hspi1.Instance               = SPI1;
	hspi1.Init.Mode              = SPI_MODE_MASTER;
	hspi1.Init.Direction         = SPI_DIRECTION_2LINES;
	hspi1.Init.DataSize          = SPI_DATASIZE_8BIT;
	hspi1.Init.CLKPolarity       = SPI_POLARITY_LOW;      // CPOL = 0
	hspi1.Init.CLKPhase          = SPI_PHASE_1EDGE;       // CPHA = 0
	hspi1.Init.NSS               = SPI_NSS_SOFT;          // CS managed by GPIO
	hspi1.Init.BaudRatePrescaler = SPI_BAUDRATEPRESCALER_16;
	hspi1.Init.FirstBit          = SPI_FIRSTBIT_MSB;
	hspi1.Init.TIMode            = SPI_TIMODE_DISABLE;
	hspi1.Init.CRCCalculation    = SPI_CRCCALCULATION_DISABLE;

	HAL_SPI_Init(&hspi1);
}

uint8_t SPI1_TransmitReceive(uint8_t spiData){
	uint8_t spi_DataReceived = 0;
	HAL_SPI_Transmit(&hspi1,&spiData,1,1000);
	HAL_SPI_Receive(&hspi1,&spi_DataReceived,1,1000);
	return spi_DataReceived;
}

void SPI1_ResetSS(void){
	GPIO_SetPin(GPIOB, 1);
}

void SPI1_SetSS(void){
	GPIO_ResetPin(GPIOB, 1);
}


