#include "stm32f4xx.h"
#include <stdio.h>


int main()
{
    RCC ->AHB1ENR |= 7;
    GPIOA->MODER = 0X10000;
    GPIOB->MODER = 0X10000;
    GPIOC->MODER = 0X0;
    while(1)
    {
        if(GPIOC->IDR & 0x200)
        {
            GPIOA->ODR &= ~0x100;
            GPIOB->ODR &= ~0x100;

        }
        else
        {
            GPIOA->ODR |= 0x100;
            GPIOB->ODR |= 0x100;
        }





   }
}
