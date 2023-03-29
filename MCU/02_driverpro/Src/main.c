#include <stdint.h>
#include"stm32f4xx.h"
#include "stdio.h"

void delay(int T)
{
	while(T--){
	for(uint32_t i = 0; i < 500000; i ++); }
}
void led_init()
{
	RCC->AHB1ENR |= 0x1;
	GPIOA->MODER |= 0x400;
}
void sw_init()
{
	RCC->AHB1ENR |= 0x4;
	GPIOC->MODER |= 0x0;
}
void operation()
{
	if(GPIOC->IDR & 0x2000)
	{
		GPIOA->BSRR |= 0x200000;
	}
	else
	{
		GPIOA->BSRR |= 0x20;
	}
}
int main(void)
{
//	GPIO_Handle_t GpioLed;
//
//	GpioLed.pGPIOx = GPIOA;
//	GpioLed.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_5;
//	GpioLed.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
//	GpioLed.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_LOW;
//	GpioLed.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
//	GpioLed.GPIO_PinConfig.GPIO_PinPuPdControl = GPIO_NO_PUPD;
//
//	GPIO_PeriClockControl(GPIOA,ENABLE);
//
//	GPIO_Init(&GpioLed);
	gpio_config();
	led_init();
	sw_init();
	while(1)
	{
		//GPIO_ToggOutputPin(GPIOA,GPIO_PIN_NO_5);
		//GPIO_WriteOutputPin(GPIOA,GPIO_PIN_NO_5,1);
		//delay(5);
		//GPIO_WriteOutputPin(GPIOA,GPIO_PIN_NO_5,0);
		//delay(5);
		operation();
	}
	return 0;
}
