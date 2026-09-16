#include <TIMER.h>

void delay_us(uint32_t micro){
	TIM2->PSC = 15;
	TIM2->CNT = 0;
	while(TIM2->CNT <= micro){}
}
