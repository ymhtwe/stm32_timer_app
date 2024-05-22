/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f3xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */
#define SPI1_SCK_Pin GPIO_PIN_5
#define SPI1_SCK_GPIO_Port GPIOA
#define SPI1_MISO_Pin GPIO_PIN_6
#define SPI1_MISO_GPIO_Port GPIOA
#define SPI1_MOSI_Pin GPIO_PIN_7
#define SPI1_MOSI_GPIO_Port GPIOA
#define OLED_DC_Pin GPIO_PIN_5
#define OLED_DC_GPIO_Port GPIOB
#define OLED_RST_Pin GPIO_PIN_8
#define OLED_RST_GPIO_Port GPIOB
#define OLED_CS_Pin GPIO_PIN_6
#define OLED_CS_GPIO_Port GPIOB
/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED1_Pin GPIO_PIN_13
#define LED1_GPIO_Port GPIOC
#define SW1_Pin GPIO_PIN_2
#define SW1_GPIO_Port GPIOA
#define ENCODER1_SW_Pin GPIO_PIN_3
#define ENCODER1_SW_GPIO_Port GPIOA
#define ENCODER2_SW_Pin GPIO_PIN_0
#define ENCODER2_SW_GPIO_Port GPIOB
#define BUZZER_Pin GPIO_PIN_1
#define BUZZER_GPIO_Port GPIOB
#define LED3_Pin GPIO_PIN_12
#define LED3_GPIO_Port GPIOB
#define SW2_Pin GPIO_PIN_13
#define SW2_GPIO_Port GPIOB
#define TRIAC_LED_Pin GPIO_PIN_14
#define TRIAC_LED_GPIO_Port GPIOB
#define TRIAC_TRIG_Pin GPIO_PIN_15
#define TRIAC_TRIG_GPIO_Port GPIOB
#define CAPACITIVE_TOUCH_Pin GPIO_PIN_10
#define CAPACITIVE_TOUCH_GPIO_Port GPIOA
#define USB__Pin GPIO_PIN_11
#define USB__GPIO_Port GPIOA
#define USB_A12_Pin GPIO_PIN_12
#define USB_A12_GPIO_Port GPIOA
#define OLED_DC_Pin GPIO_PIN_5
#define OLED_DC_GPIO_Port GPIOB
#define OLED_RESET_Pin GPIO_PIN_8
#define OLED_RESET_GPIO_Port GPIOB
#define LED2_Pin GPIO_PIN_9
#define LED2_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
