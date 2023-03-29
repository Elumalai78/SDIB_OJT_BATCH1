
#include "stm32f4xx.h"                  // Device header
#define infinte 1

void delay(int seconds);

int main(void)
{

	RCC->AHB1ENR |=7;						//Enable AHB1 BUS which is connected to port A,B,C
	GPIOA->MODER |= (1<<16);                  // PA8 as output mode
	GPIOA->MODER |=(1<<18);
	GPIOB->MODER |=(1<<16);						//PB8 AS OUTPUT MODE
	//GPIOC->MODER |=(1<<18);						//PC9 as input mode
	GPIOC->PUPDR |=(1<<18);

	while(infinte)
	{	uint8_t count =0;

		while(count<3)
		{
			if((GPIOC->IDR &=(1<<9))==0)					//digitalWrite (PC9,HIGH)
			{
				count++;
				printf("Button Pressed %d times\n",count);
				if(count==1)
				{
					delay(100);
					GPIOA->BSRR |=(1<<8);               //ODR corresponding to BSRR Set
				}
				else if(count==2)
				{
					delay(100);
					GPIOA->BSRR |=(1<<8);
					GPIOA->BSRR |=(1<<9);
				}
				else
				{
					delay(100);
					GPIOA->BSRR |=(1<<8);
					GPIOA->BSRR |=(1<<9);
					GPIOB->BSRR |=(1<<8);
				}
			}
			else
			{
				//printf("Button not Pressed\n");
				delay(100);
				GPIOA->BSRR |=(1<<24);					//ODR corresponding to BSRR RESet
				GPIOA->BSRR |=(1<<25);
				GPIOB->BSRR |=(1<<24);
			}

		}
	}
}
void delay(int seconds)
{

	for(;seconds>0;seconds--)
		for(int count1=0;count1<3000;count1++);

}
