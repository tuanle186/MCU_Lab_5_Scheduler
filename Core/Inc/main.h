/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

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
#define EN0_Pin GPIO_PIN_1
#define EN0_GPIO_Port GPIOA
#define EN1_Pin GPIO_PIN_2
#define EN1_GPIO_Port GPIOA
#define EN2_Pin GPIO_PIN_3
#define EN2_GPIO_Port GPIOA
#define EN3_Pin GPIO_PIN_4
#define EN3_GPIO_Port GPIOA
#define a_Pin GPIO_PIN_5
#define a_GPIO_Port GPIOA
#define b_Pin GPIO_PIN_6
#define b_GPIO_Port GPIOA
#define c_Pin GPIO_PIN_7
#define c_GPIO_Port GPIOA
#define button_1_Pin GPIO_PIN_0
#define button_1_GPIO_Port GPIOB
#define button_2_Pin GPIO_PIN_1
#define button_2_GPIO_Port GPIOB
#define button_3_Pin GPIO_PIN_2
#define button_3_GPIO_Port GPIOB
#define d_Pin GPIO_PIN_8
#define d_GPIO_Port GPIOA
#define e_Pin GPIO_PIN_9
#define e_GPIO_Port GPIOA
#define f_Pin GPIO_PIN_10
#define f_GPIO_Port GPIOA
#define g_Pin GPIO_PIN_11
#define g_GPIO_Port GPIOA
#define red_1_Pin GPIO_PIN_3
#define red_1_GPIO_Port GPIOB
#define amber_1_Pin GPIO_PIN_4
#define amber_1_GPIO_Port GPIOB
#define green_1_Pin GPIO_PIN_5
#define green_1_GPIO_Port GPIOB
#define red_2_Pin GPIO_PIN_6
#define red_2_GPIO_Port GPIOB
#define amber_2_Pin GPIO_PIN_7
#define amber_2_GPIO_Port GPIOB
#define green_2_Pin GPIO_PIN_8
#define green_2_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
