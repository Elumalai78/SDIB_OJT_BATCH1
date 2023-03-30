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
#include "main.h"
#include  "stm32f4xx.h"
void delay(int n);
void I2C1_init(void);
void I2C1_bytewrite(char saddr, char maddr, char data);

int main(void)
{
	I2C1_init();
	I2C1_bytewrite(SLAVE_ADDR, 0x08,4);
	while(1)
	{}
}
