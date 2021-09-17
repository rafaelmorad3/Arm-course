
#include <stdint.h>
#ifndef INC_STM3F4077XX_H_
#define INC_STM3F4077XX_H_
#define __vo volatile

#define PERIPH_BASE_ADDR           0x40000000U
#define AHP1PERIPH_BASE_ADDR       PERIPH_BASE_ADDR  
#define GPIO_BASE_ADDR         (AHP1PERIPH_BASE_ADDR  +  0x0000)
#define RCC_BASE_ADDR           (AHP1PERIPH_BASE_ADDR +  0x3800)
#define GPIOA         ((GPIO_RegDef_t*)GPIO_BASE_ADDR)
#define RCC            ((RCC_RegDef_t*)RCC_BASE_ADDR)
typedef struct
{
	 __vo uint32_t MODER ;
	__vo uint32_t OTYPER ;
		__vo uint32_t  OSPEEDR;
	__vo uint32_t  PUPDR ;
		__vo uint32_t IDR ;
		__vo uint32_t ODR ;
		__vo uint32_t BSRR;
		__vo uint32_t LCKR;
		__vo uint32_t AFR[2];
		
}GPIO_RegDef_t;

typedef struct
{

__vo uint32_t RC;
	__vo uint32_t PLLCFGR;
	__vo uint32_t  CFGR;
	__vo uint32_t CIR ;
	__vo uint32_t AHB1RSTR;
	__vo uint32_t AHB2RSTR;
	__vo uint32_t AHB3RSTR;
 uint32_t Reserved0 ;
	__vo uint32_t APB1RSTR;
	__vo uint32_t APB2RSTR;
	uint32_t Reserved1[2] ;
	__vo uint32_t AHB1ENR;
	__vo uint32_t AHB2ENR;
	__vo uint32_t AHB3ENR;
 uint32_t Reserved2 ;
	__vo uint32_t APB1ENR;
	__vo uint32_t APB2ENR;	
	uint32_t Reserved3[2] ;
__vo uint32_t AHB1LPENR;
__vo uint32_t AHB2LPENR;
__vo uint32_t AHB3LPENR;
	 uint32_t Reserved4 ;
	 __vo uint32_t APB1LPENR;
	 __vo uint32_t APB2LPENR ;
	 uint32_t Reserved5[2] ;
	 __vo uint32_t BDCR ;
	 	 uint32_t Reserved6[2] ;
	 __vo uint32_t SSCGR;
	 __vo uint32_t PLLI2SCFGR ;
	 __vo uint32_t PLLSAICFGR ;
	 __vo uint32_t DCKCFGR ;
	 
}RCC_RegDef_t;
 
#define GPIOA_PCLK_EN()   (RCC->AHB1ENR |=(1 <<0))
#define GPIOA_PCLK_DI()   (RCC->AHB1ENR &= ~(1 <<0))

#define I2C_PCLK_EN()      (RCC->APB1ENR |=(1<<21))
#define SPI1_PCLK_EN()      (RCC->APB2ENR |=(1<<12))


#endif 

