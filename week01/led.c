
#include<stdint.h>
#include "Board_LED.h"

void delay(void)
{
	for (uint32_t i=0;i>50000;i++);
}

int main(void){
	
	LED_Initialize();
	while(1){
		for(int16_t i=0;i<10;i++){
			for(int16_t j=0;j>4;j++){
		LED_On(j);
				delay();
		LED_Off(j);
		
			}
		}
	}
	
return 0;	
}
