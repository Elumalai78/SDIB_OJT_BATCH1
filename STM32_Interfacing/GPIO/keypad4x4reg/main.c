/* This program checks a 4x4 matrix keypad to see which key is pressed in keypad
   using led toggle count.
* PC0-3 are connected to the columns as Input to MCU
*  PC4-7 are connected to the rows of the keypad as Output of MCU.
*  LED connected to PA8 */

#include "stm32f4xx.h"
void delay(void);
void delayMs(int n);
void keypad_init(void);
char keypad_getkey(void);
void LED_init(void);
void LED_blink(int value);

int main(void)
{
	unsigned char key;
	keypad_init();
	LED_init();
	while(1)
	{
		key = keypad_getkey(); 					/* read the keypad */
		if (key != 0)
			LED_blink(key); 					/* set LEDs according to the key code */
	}
}

/* this function initializes PC0-2 (column) and PC4-7 (row).
* The column pins need to have the pull-up resistors enabled. */

void keypad_init(void)
{
	RCC->AHB1ENR |= 0x4; 						/* enable GPIOC clock */
	GPIOC->MODER &= ~0xFF; 				/* clear pin mode to input */
	GPIOC->PUPDR = 0x55; 					/* enable pull up resistors for column pins */
}

char keypad_getkey(void)
{
	int row, col;
	const int row_mode[] = {(1<<8),(1<<10),(1<<12),(1<<14)}; 				/* one row is output */
	const int row_low[] = {(1<<20),(1<<21),(1<<22),(1<<23)}; 				/* one row is low */
	const int row_high[] = {(1<<4),(1<<5),(1<<6),(1<<7)}; 				/* one row is high */

	/* check to see any key pressed */
	GPIOC->MODER = 0x5500; 								/* make all row pins output */
	GPIOC->BSRR = 0xF00000; 								/* drive all row pins low */
	delay(); 												/* wait for signals to settle */
	col = GPIOC->IDR & 0xF; 								/* read all column pins */
	GPIOC->MODER &= ~0xFF00; 							/* disable all row pins drive */
	if (col == 0xF) 										/* if all columns are high */
		return 0; 											/* no key pressed */

	/* If a key is pressed, it gets here to find out which key.
* It activates one row at a time and read the input to see which column is active. */

	for (row = 0; row < 4; row++)
	{
		GPIOC->MODER &= ~0xFF00; 						/* disable all row pins drive */
		GPIOC->MODER |= row_mode[row]; 						/* enable one row at a time */
		GPIOC->BSRR = row_low[row]; 						/* drive the active row low */
		delay(); 											/* wait for signal to settle */
		col = GPIOC->IDR & 0xF; 							/* read all columns */
		GPIOC->BSRR = row_high[row]; 						/* drive the active row high */
		if (col != 0xF)
			break; 											/* if one of the input is low, some key is pressed. */
	}
	GPIOC->BSRR = 0xF0; 								/* drive all rows high before disable them */
	GPIOC->MODER &= ~0xFF00; 							/* disable all rows */
	if (row == 4)
		return 0; 											/* if we get here, no key is pressed */

	/* gets here when one of the rows has key pressed, check which column it is */
	if (col == 0xE)
		return row * 4 + 1; 								/* key in column 0 */
	if (col == 0xD)
		return row * 4 + 2; 								/* key in column1 */
	if (col == 0xB)
		return row * 4 + 3; 								/* key in column 2 */
	if (col == 0x7)
		return row * 4 + 4; 								/* key in column 3 */


	return 0; /* just to be safe */
}

void LED_init(void)
{
	// enable PA5 for green LED
	RCC->AHB1ENR |= 0x1; 										/* enable GPIOA clock */
	GPIOA->MODER &= ~(3<<10); 			/* clear pin mode */
	GPIOA->MODER |= (1<<10); 			/* set pin output mode */
}

/*turn on or off the LEDs according to the value */

void LED_blink(int value)
{
	value %= 17; 										/* cap the max count at 16 */
	for (; value > 0; value--)
	{
		GPIOA->BSRR = (1<<5); 						/* turn on LED */
		delayMs(200);
		GPIOA->BSRR = (1<<21); 						/* turn off LED */
		delayMs(200);
	}
	delayMs(200);
}

/* make a small delay */
void delay(void)
{
	int i;
	for (i = 0; i < 20; i++) ;
}


void delayMs(int n)
{
	int i;
	for (; n > 0; n--)
		for (i = 0; i < 3195; i++) ;
}
