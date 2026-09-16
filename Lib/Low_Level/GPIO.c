#include <GPIO.h>

uint16_t GPIO_ReadPin(GPIO_TypeDef* GPIO, uint16_t PIN){
	uint8_t state = 0;
	if(GPIO->IDR & (1<<PIN)){
		state = 1;
	}
	else{
		state = 0;
	}
	return state;
}

void GPIO_ResetPin(GPIO_TypeDef* GPIO, uint16_t PIN){
	GPIO->ODR &=~(1<<PIN);
}

void GPIO_SetPin(GPIO_TypeDef* GPIO, uint16_t PIN){
	GPIO->ODR |= (1<<PIN);
}
