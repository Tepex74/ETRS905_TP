#include <stdint.h>
#include <stm32f446xx.h>
#include <stdio.h>
#include "main.h"
#include "gpio.h"
#include "usart.h"
#include "timer.h"
#include "util.h"

#include <ONEWIRE.h>
#include <DS18B20.h>

int main(void)
{

	ONEWIRE_PINOUT Capteur_Temperature;
	Capteur_Temperature.port = GPIOA;
	Capteur_Temperature.pin = 1;

	float Temperature = 0;

	FPU_Init();
	GPIO_Init();
	USART2_Init();
	SYSTICK_Init();

	Temperature = DS18B20_GetTemperature(&Capteur_Temperature);
	printf("Temperature received : %f\n\r",Temperature);

	while(1){
		SYSTICK_Delay(1000);
		GPIOA->ODR ^= 1<<5;
		printf("Hello\r\n");
	}
}
