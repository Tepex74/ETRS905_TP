#ifndef _GPIO_H_
#define _GPIO_H_

uint16_t GPIO_ReadPin(GPIO_TypeDef* GPIO, uint16_t PIN);

void GPIO_ResetPin(GPIO_TypeDef* GPIO, uint16_t PIN);

void GPIO_SetPin(GPIO_TypeDef* GPIO, uint16_t PIN);

#endif
