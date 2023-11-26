/*
 * seven_seg.c
 *
 *  Created on: Nov 3, 2023
 *      Author: lequo
 */

#include "main.h"

int seven_seg_buffer[4] = {8, 8, 8, 8};

void display7SEG(int num) {
	switch(num) {
		case 0:
			HAL_GPIO_WritePin(GPIOA, a_Pin | b_Pin | c_Pin | d_Pin | e_Pin | f_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, g_Pin, GPIO_PIN_SET);
			break;
		case 1:
			HAL_GPIO_WritePin(GPIOA, b_Pin | c_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, a_Pin | d_Pin | e_Pin | f_Pin | g_Pin, GPIO_PIN_SET);
			break;
		case 2:
			HAL_GPIO_WritePin(GPIOA, a_Pin | b_Pin | d_Pin | e_Pin | g_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, c_Pin | f_Pin, GPIO_PIN_SET);
			break;
		case 3:
			HAL_GPIO_WritePin(GPIOA, a_Pin | b_Pin | c_Pin | d_Pin | g_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, e_Pin | f_Pin, GPIO_PIN_SET);
			break;
		case 4:
			HAL_GPIO_WritePin(GPIOA, b_Pin | c_Pin | f_Pin | g_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, a_Pin | d_Pin | e_Pin, GPIO_PIN_SET);
			break;
		case 5:
			HAL_GPIO_WritePin(GPIOA, a_Pin | c_Pin | d_Pin | f_Pin | g_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, b_Pin | e_Pin, GPIO_PIN_SET);
			break;
		case 6:
			HAL_GPIO_WritePin(GPIOA, a_Pin | c_Pin | d_Pin | e_Pin | f_Pin | g_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, b_Pin, GPIO_PIN_SET);
			break;
		case 7:
			HAL_GPIO_WritePin(GPIOA, a_Pin | b_Pin | c_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, d_Pin | e_Pin | f_Pin | g_Pin, GPIO_PIN_SET);
			break;
		case 8:
			HAL_GPIO_WritePin(GPIOA, a_Pin | b_Pin | c_Pin | d_Pin | e_Pin | f_Pin | g_Pin, GPIO_PIN_RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(GPIOA, a_Pin | b_Pin | c_Pin | d_Pin | f_Pin | g_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(GPIOA, e_Pin, GPIO_PIN_SET);
			break;
		default:
			HAL_GPIO_WritePin(GPIOA, a_Pin | b_Pin | c_Pin | d_Pin | e_Pin | f_Pin | g_Pin, GPIO_PIN_SET);
	}
}

void update7SEG(int index) {
	switch(index) {
		case 0:
			HAL_GPIO_WritePin(GPIOA, EN1_Pin | EN2_Pin | EN3_Pin, SET);
			display7SEG(seven_seg_buffer[0]);
			HAL_GPIO_WritePin(GPIOA, EN0_Pin, RESET);
			break;
		case 1:
			HAL_GPIO_WritePin(GPIOA, EN0_Pin | EN2_Pin | EN3_Pin, SET);
			display7SEG(seven_seg_buffer[1]);
			HAL_GPIO_WritePin(GPIOA, EN1_Pin, RESET);
			break;
		case 2:
			HAL_GPIO_WritePin(GPIOA, EN0_Pin | EN1_Pin | EN3_Pin, SET);
			display7SEG(seven_seg_buffer[2]);
			HAL_GPIO_WritePin(GPIOA, EN2_Pin, RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(GPIOA, EN0_Pin | EN1_Pin | EN2_Pin, SET);
			display7SEG(seven_seg_buffer[3]);
			HAL_GPIO_WritePin(GPIOA, EN3_Pin, RESET);
			break;
		default:
			HAL_GPIO_WritePin(GPIOA, EN0_Pin|EN1_Pin|EN2_Pin|EN3_Pin, SET);
			break;
	}
}


void update7SEG_buffer_auto(int duration_1, int duration_2) {
	seven_seg_buffer[0] = duration_1/10;
	seven_seg_buffer[1] = duration_1 - seven_seg_buffer[0]*10;
	seven_seg_buffer[2] = duration_2/10;
	seven_seg_buffer[3] = duration_2 - seven_seg_buffer[2]*10;
}

void update7SEG_buffer_manual(int mode, int duration) {
	seven_seg_buffer[0] = 0;
	seven_seg_buffer[1] = mode;
	seven_seg_buffer[2] = duration/10;
	seven_seg_buffer[3] = duration - seven_seg_buffer[2]*10;
}

