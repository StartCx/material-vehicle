#ifndef __TIMER_H
#define __TIMER_H
#include "system.h"

#define BASIC_TIM           		TIM6
#define BASIC_TIM_CLK       		RCC_APB1Periph_TIM6

#define BASIC_TIM_IRQn				TIM6_DAC_IRQn
#define BASIC_TIM_IRQHandler    	TIM6_DAC_IRQHandler


void TIMx_Configuration(void);
void TIM14_Int_Init(u16 arr,u16 psc);

#endif 

