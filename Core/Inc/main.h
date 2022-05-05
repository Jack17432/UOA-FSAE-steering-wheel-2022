/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
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
#include "stm32f0xx_hal.h"

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

HAL_StatusTypeDef CAN_AddTxMessagePointer(CAN_HandleTypeDef *hcan, CAN_TxHeaderTypeDef *pHeader, uint8_t *aData[], uint32_t *pTxMailbox);

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define button_1_Pin GPIO_PIN_0
#define button_1_GPIO_Port GPIOA
#define button_2_Pin GPIO_PIN_1
#define button_2_GPIO_Port GPIOA
#define button_3_Pin GPIO_PIN_2
#define button_3_GPIO_Port GPIOA
#define button_4_Pin GPIO_PIN_3
#define button_4_GPIO_Port GPIOA
#define button_5_Pin GPIO_PIN_4
#define button_5_GPIO_Port GPIOA
#define button_6_Pin GPIO_PIN_5
#define button_6_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

#define CAN_MESSAGE_ID		0x222		// CAN ID that the message will be sent under
#define CAN_MESSAGE_DELAY	100			// Delay in milliseconds between the CAN messages
#define CAN_PAYLOAD_SIZE	5			// Amount of used bytes in the can payload
#define PIN_MASK			0x003FU		// Masks the all bits in the REG that are not needed
#define NUM_ADC_CHANNLES	4			// This is for the ADC DMA

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
