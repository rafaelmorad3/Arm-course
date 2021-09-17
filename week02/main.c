

#include <stdint.h>
#include "stm32f446xx.h"
//we will switch the clock source to HSE
int main(void)
{
  RCC_TypeDef *pRCC;
  pRCC= RCC;
 //1. turn on the HSE Oscillator
  pRCC->CR |= (1<<16);
 //2. wait until the HSE becomes stable.crystal oscillator takes more time than the RC oscillator to become stable
  while( ! (pRCC->CR & (1<<17)));

 //3. Select HSE as the system clock
	// set pins
  pRCC->CFGR &= ~(0xA0000003 <<0);
	
  pRCC->CFGR |=(0x1 <<0);
	//make MCO2 select HSE
  pRCC->CFGR |=(1<<31);
	// division by 2
	pRCC->CFGR|=(1<<29);
  return 0;
}



