#include "main.h"



void AppMain(void)
{
	while(1)
	{
		HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_13); // Toggle PC13
        HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_9);  // Toggle PB9
        HAL_GPIO_TogglePin(GPIOB, GPIO_PIN_12); // Toggle PB12
		
        HAL_Delay(500); // Delay for 0.5 second
		
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, GPIO_PIN_SET);
		
	}
}