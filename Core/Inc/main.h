/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
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
#define B1_Pin GPIO_PIN_13
#define B1_GPIO_Port GPIOC
#define B1_EXTI_IRQn EXTI15_10_IRQn
#define WHITE2_Pin GPIO_PIN_4
#define WHITE2_GPIO_Port GPIOA
#define LD2_Pin GPIO_PIN_5
#define LD2_GPIO_Port GPIOA
#define BLACK_Pin GPIO_PIN_12
#define BLACK_GPIO_Port GPIOB
#define WHITE_Pin GPIO_PIN_13
#define WHITE_GPIO_Port GPIOB
#define BLACK2_Pin GPIO_PIN_14
#define BLACK2_GPIO_Port GPIOB
#define WHITE3_Pin GPIO_PIN_15
#define WHITE3_GPIO_Port GPIOB
#define WHITE1_Pin GPIO_PIN_6
#define WHITE1_GPIO_Port GPIOC
#define BLACK1_Pin GPIO_PIN_7
#define BLACK1_GPIO_Port GPIOC
#define BLUE_Pin GPIO_PIN_8
#define BLUE_GPIO_Port GPIOC
#define BLUE1_Pin GPIO_PIN_9
#define BLUE1_GPIO_Port GPIOC
#define BLUE2_Pin GPIO_PIN_8
#define BLUE2_GPIO_Port GPIOA
#define BLUE3_Pin GPIO_PIN_11
#define BLUE3_GPIO_Port GPIOA
#define BLACK3_Pin GPIO_PIN_12
#define BLACK3_GPIO_Port GPIOA
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define SWO_Pin GPIO_PIN_3
#define SWO_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
