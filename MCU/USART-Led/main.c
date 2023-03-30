#include "main.h"

UART_HandleTypeDef huart1;

uint8_t RX1_Char = 0x00;

void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_USART1_UART_Init(void);

//---------[ UART Data Reception Completion CallBackFunc. ]---------
void HAL_USART_RxCpltCallback(UART_HandleTypeDef *huart)
{
    HAL_UART_Receive_IT(&huart1, &RX1_Char, 1);
}

int main(void)
{
  uint8_t MSG1[] = "Button State: Released\r\n";
  uint8_t MSG2[] = "Button State: Pressed\r\n";

  HAL_Init();
  SystemClock_Config();
  MX_GPIO_Init();
  MX_USART1_UART_Init();
  HAL_UART_Receive_IT(&huart1, &RX1_Char, 1);

  while (1)
  {
    //--------[ Read The Button State & Send It Via UART ]---------
    if(HAL_GPIO_ReadPin (GPIOB, GPIO_PIN_14))
    {
      HAL_UART_Transmit(&huart1, MSG2, sizeof(MSG2), 100);
    }
    else
    {
      HAL_UART_Transmit(&huart1, MSG1, sizeof(MSG1), 100);
    }
    //--------[ Read The Received Character & Toggle LEDs Accordingly ]--------
    if(RX1_Char == '1')
    {
          HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_12);
      HAL_UART_Receive_IT(&huart1, &RX1_Char, 1);
      RX1_Char = 0x00;
    }
    if(RX1_Char == '2')
    {
      HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_13);
      HAL_UART_Receive_IT(&huart1, &RX1_Char, 1);
      RX1_Char = 0x00;
    }
    HAL_Delay(100);
  }
}
