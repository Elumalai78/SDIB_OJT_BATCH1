#include "stm32f4xx.h" 								// Device header
void delay(int sec);
void Usart_Init(void);
char Usart_Read(void);
void USART1_write(char data);
int main(void)
{
	volatile char ch;
	Usart_Init();
	while(1)
	{
		ch=Usart_Read();
		USART1_write(ch);
	}
	return 0;
}
void Usart_Init(void)
{
	RCC->APB2ENR |= 0x10; 						//Enable APB2ENR
	RCC->AHB1ENR |= 0x1; 							//Enable GPIOA->PA9
	GPIOA->MODER &=~0x3C0000;							//clear pa9 and pa10
	GPIOA->MODER |= 0x280000; 							//Alernate Function at PA9 AND PA10
	GPIOA->AFR[1] &=~0xFF0;						//clear pa9 and pa10
	GPIOA->AFR[1] |=0x770; 						//Enable USART1 FOR pa9 and pa10
	USART1->BRR |= 0x683; 							//9600 Baud Rate
	USART1->CR1 |= 0x4; 							//Rx Mode PA10
	USART1->CR1 |=0x8;								//Tx Mode PA9
	USART1->CR1 |= 0x2000; 							//USART1 Enable
}

char Usart_Read(void)
{
	while(!(USART1->SR & 0x20)){} 				//Check the status register for Rx Buffer
	return USART1->DR; 							//Return Data registers
}
void USART1_write(char data)
{
	while(!(USART1->SR & 0x80))	{}				//if 0 enters loops if 1 exits											//This loop is for Tx buffer
	USART1->DR = (data & 0xFF);						//Sending data to data register
}
void delay(int sec)
{
	for(;sec>0;sec--)
	{
		for(int count1=0;count1<3000;count1++);
	}
}
