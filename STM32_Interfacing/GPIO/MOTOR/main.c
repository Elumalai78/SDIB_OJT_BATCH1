#include"stm32f4xx.h"
void Moter_init()
{
	RCC->AHB1ENR |=0x1;
	GPIOA->MODER |=0X400;
}
void sw_init()
{
	RCC->AHB1ENR |=0x4;
		GPIOA->MODER |=0x0;
}
void operation()
{
	if((GPIOC->IDR&0X2000))
	{
		GPIOA->BSRR |=0x200000;
	}
	else{
		GPIOA->BSRR |=0x20;

	}
}

int main()
{
	Moter_init();
	sw_init();
	while(1)
	{
	operation();

	}

}
