/*
 * global.c
 *
 *  Created on: Nov 2, 2023
 *      Author: lequo
 */
#include "main.h"
#include "global.h"

int T_RED = 5;
int T_AMBER = 2;
int T_GREEN = 3;

int status = INIT;

void led_config() {
	switch (status) {
		case MODE1:
			HAL_GPIO_WritePin(GPIOB, red_1_Pin | red_2_Pin | amber_1_Pin | amber_2_Pin | green_1_Pin | green_2_Pin, GPIO_PIN_SET);
			break;

		case RED_GREEN:
			HAL_GPIO_WritePin(GPIOB, red_1_Pin | green_2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOB, amber_1_Pin | red_2_Pin, GPIO_PIN_SET);
			break;

		case RED_AMBER:
			HAL_GPIO_WritePin(GPIOB, green_2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, amber_2_Pin, GPIO_PIN_RESET);
			break;

		case GREEN_RED:
			HAL_GPIO_WritePin(GPIOB, green_1_Pin | red_2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOB, red_1_Pin | amber_2_Pin, GPIO_PIN_SET);
			break;

		case AMBER_RED:
			HAL_GPIO_WritePin(GPIOB, green_1_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, amber_1_Pin, GPIO_PIN_RESET);
			break;

		case MODE2:
			HAL_GPIO_WritePin(GPIOB, amber_1_Pin | amber_2_Pin | green_1_Pin | green_2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, red_1_Pin | red_2_Pin, GPIO_PIN_RESET);
			break;

		case MODE3:
			HAL_GPIO_WritePin(GPIOB, red_1_Pin | red_2_Pin | green_1_Pin | green_2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, amber_1_Pin | amber_2_Pin, GPIO_PIN_RESET);
			break;

		case MODE4:
			HAL_GPIO_WritePin(GPIOB, red_1_Pin | red_2_Pin | amber_1_Pin | amber_2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(GPIOB, green_1_Pin | green_2_Pin, GPIO_PIN_RESET);
			break;

		default:
			break;
	}
}
