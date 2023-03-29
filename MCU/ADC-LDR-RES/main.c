/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/


#include "stm32f4xx.h"
void ADC_Init(void);
void PWM_Init(void);
void delay(int sec);
int main (void)
{
uint16_t AD_RES = 0;
ADC_Init();
PWM_Init();
while (1)
{
ADC1->CR2 |= (1<<30); /* start a conversion */
while(!(ADC1->SR & 2)) {} /* wait for conv complete */
// Read The ADC Conversion Result & Map It To PWM DutyCycle
AD_RES = ADC1->DR; /* read conversion result */
TIM2->CCR1 = (AD_RES<<4);
delay(20);
}
}
void ADC_Init(void)
{
/* set up pin PA1 for analog input */
RCC->AHB1ENR |= 1; /* enable GPIOA clock */
GPIOA->MODER |= 0xC; /* PA1 analog */
/* setup ADC1 */
RCC->APB2ENR |= 0x100; /* enable ADC1 clock */
ADC1->CR1 |=10;
ADC1->SMPR2 |=(1<<3);
ADC1->CR2 = 0; /* SW trigger */
ADC1->SQR3 = 1; /* single conversion ch 1 */
ADC1->CR2 |= 1; /* enable ADC1 */
}
void PWM_Init(void)
{
// configure PA5 as output of TIM2 CH1
RCC->AHB1ENR |= 1; /* enable GPIOA clock */
GPIOA->MODER &=~(3<<10); /* clear pin mode */
GPIOA->MODER |= (1<<11); /* set pin to alternate function */
GPIOA->AFR[0] &= ~(0xF<<20); /* clear pin AF bits */
GPIOA->AFR[0]|= 1<<20; /* set pin to AF1 for TIM2 CH1 */
/* setup TIM2 */
RCC->APB1ENR |= 1; /* enable TIM2 clock */
TIM2->PSC = 0;
TIM2->ARR = 65536 - 1;
TIM2->CCMR1 = 0x0068; /* PWM mode */
TIM2->CCER = 1; /* enable PWMCh1N */
TIM2->CR1 = 1; /* enable timer */
}
void delay(int sec)
{
for(;sec>0;sec--)
{
for(int count1=0;count1<3195;count1++);
}
}
