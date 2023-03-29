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
#include<stdio.h>
void LED_Initi()
{
	RCC->AHB1ENR |=0X01;
	GPIOA->MODER |=0x10000; // PA8 OUTPUT PIN
}
void BUZZER_Initi()
{
	RCC->AHB1ENR |=0X02;
	GPIOB->MODER |=0x10000; //PB8 OUTPUT PIN
}
void SWITCH_Initi()
{
	RCC->AHB1ENR |=0x04;
	GPIOC->MODER |=0x00; // PC9 INPUT PIN
}
void opration()
{
	if((GPIOC->IDR & 0x200)) // INPUT SWITCH
	{
		GPIOA->BSRR |=0x100;
		GPIOB->BSRR |=0x100;
	}
	else
	{
		GPIOA->BSRR |=0x100000;
	    GPIOB->BSRR |=0x1000000;
	}
}
int main()
{
	LED_Initi();
	BUZZER_Initi();
	SWITCH_Initi();
	while(1)
	{
		opration();
	}
}
