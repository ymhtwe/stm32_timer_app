#include "stm32f3xx.h"

void delay(int iter);

int main(void)
{
    // Enable High Speed Internal Clock (HSI = 16 MHz)
    RCC->CR |= ((uint32_t)RCC_CR_HSION);

    // wait until HSI is ready
    while ((RCC->CR & (uint32_t)RCC_CR_HSIRDY) == 0);

    // Select HSI as system clock source 
    RCC->CFGR &= (uint32_t)((uint32_t)~(RCC_CFGR_SW));
    RCC->CFGR |= (uint32_t)RCC_CFGR_SW_HSI;     

    // Wait till HSI is used as system clock source 
    while ((RCC->CFGR & (uint32_t)RCC_CFGR_SWS) != (uint32_t)0x00);

    // Enable GPIO Peripheral clock
    RCC->AHBENR |= (1 << RCC_AHBENR_GPIOEEN_Pos);

    // Configure PE8 in output mode
    GPIOE->MODER |= (GPIO_MODER_MODER8_0);

    // Ensure push pull mode selected--default
    GPIOE->OTYPER &= ~(GPIO_OTYPER_OT_8);

    // Ensure maximum speed setting (even though it is unnecessary)
    GPIOE->OSPEEDR |= (GPIO_OSPEEDER_OSPEEDR8);

    // Ensure all pull up pull down resistors are disabled
    GPIOE->PUPDR &= ~(GPIO_PUPDR_PUPDR8);

    while(1)
    {
        // Reset PE8
        GPIOE->BSRR = GPIO_BSRR_BR_8;

        // Delay ~ 1 second
        delay(16000000);

        // Set PE8
        GPIOE->BSRR = GPIO_BSRR_BS_8;

        // Delay ~ 1 second
        delay(16000000);
    }
}

void delay(int iter)
{
    int volatile counter;
    counter = iter;
    while(counter > 0)
    {
        counter--;
    }
}