/*
 * stm32_driver_gpio.c
 *
 *  Created on: Nov 19, 2022
 *      Author: PHY202209EF15
 */


#include "stm32f411x_driver_uart.h"

void GPIO_PeriClockControl(GPIO_RegDef_t *pGPIOx, uint8_t EnorDi)
{
	if(EnorDi == ENABLE)
	{
		if(pGPIOx == GPIOA)
		{
			GPIOA_PCLK_EN();
		}
		else if(pGPIOx == GPIOB)
		{
			GPIOB_PCLK_EN();
		}
		else if(pGPIOx == GPIOC)
		{
			GPIOC_PCLK_EN();
		}
		else if(pGPIOx == GPIOD)
		{
			GPIOD_PCLK_EN();
		}
		else if(pGPIOx == GPIOE)
		{
			GPIOE_PCLK_EN();
		}
		else if(pGPIOx == GPIOH)
		{
			GPIOH_PCLK_EN();
		}
	}
	else
	{
		//TODO
	}
}

/****/

void GPIO_Init(GPIO_Handle_t *pGPIOHandle)
{
	uint32_t temp=0;
	GPIO_PeriClockControl(pGPIOHandle->pGPIOx, ENABLE);

	if(pGPIOHandle->GPIO_PinConfig.GPIO_PinMode <= GPIO_MODE_ANALOG)
	{
		temp = (pGPIOHandle->GPIO_PinConfig.GPIO_PinMode << (2 * pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber));  //it stores the PIN number in temp
		pGPIOHandle->pGPIOx->MODER &= ~( 0x3 << (2 * pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber));  //clearing both the BITs
		pGPIOHandle->pGPIOx->MODER |= temp;  //setting the temp into the MODER
	}
	else
	{
		/* LATER WILL IMPLEMENT THE IRQ CODE */
	}

	/* CONFIGURE THE SPEED */
	temp = 0;
	temp = (pGPIOHandle->GPIO_PinConfig.GPIO_PinSpeed << (2 * pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber));
	pGPIOHandle->pGPIOx->OSPEEDER &= ~( 0x3 << (2 * pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber));
	pGPIOHandle->pGPIOx->OSPEEDER |= temp;

	//CONFIGURE THE PUPD SETTINGS
	temp = (pGPIOHandle->GPIO_PinConfig.GPIO_PinPuPdControl << (2 * pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber));
	pGPIOHandle->pGPIOx->PUPDR &= ~( 0x3 << (2 * pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber));
	pGPIOHandle->pGPIOx->PUPDR |= temp;

	//CONFIGURE THE OPTYPE SETTINGS
	temp = (pGPIOHandle->GPIO_PinConfig.GPIO_PinOPType <<  pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber);
	pGPIOHandle->pGPIOx->OTYPER &= ~( 0x1 <<  pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber);
	pGPIOHandle->pGPIOx->OTYPER |= temp;

//	/CONFIGURE THE ALTERNATIVE FUNCTIONALITY/
//	if(pGPIOHandle->GPIO_PinConfig.GPIO_PinMode == GPIO_MODE_ALTEN)
//	{
//		uint8_t temp1, tmmep2;
//		temp1= pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber / 8;
//	}
}

void GPIO_DeInit(GPIO_RegDef_t *pGPIOx)
{
	if(pGPIOx == GPIOA)
	{
		GPIOA_REG_RESET();
	}
	else if(pGPIOx == GPIOB)
	{
		GPIOB_REG_RESET();
	}
	else if(pGPIOx == GPIOC)
	{
		GPIOC_REG_RESET();
	}
}

uint8_t GPIO_ReadInputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber)
{
	uint8_t value;

	value = (uint8_t)((pGPIOx->IDR >> PinNumber) & 0x00000001 );

	return value;
}

uint16_t GPIO_ReadInputPort(GPIO_RegDef_t *pGPIOx)
{
	uint16_t value;

	value = (uint16_t)pGPIOx->IDR;

	return value;
}

void GPIO_WriteOutputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber, uint8_t Value)
{
	if(Value == GPIO_PIN_SET)
	{
		pGPIOx->ODR |= (1 << PinNumber);
	}
	else
	{
		pGPIOx->ODR &= ~(1 << PinNumber);
	}
}

void GPIO_WriteOutputPort(GPIO_RegDef_t *pGPIOx, uint16_t Value)
{
	pGPIOx->ODR = Value;
}

void GPIO_ToggOutputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber)
{
	pGPIOx->ODR ^= (1 << PinNumber);
}
