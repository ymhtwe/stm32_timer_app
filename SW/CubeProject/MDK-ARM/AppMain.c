#include "main.h"



void AppMain(void)
{
	while(1)
	{
		HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_0); // Replace GPIOA and GPIO_PIN_0 with your GPIO port and pin
        HAL_Delay(1000); // Delay for 1 second
	}
}