/*
 * fsm_automatic.c
 *
 *  Created on: Oct 29, 2023
 *      Author: lequo
 */
#include "main.h"
#include "global.h"
#include "fsm_automatic.h"
#include "timer.h"
#include "input_reading.h"
#include "seven_seg.h"

int counter_1 = 0, counter_2 = 0;
void fsm_automatic() {
	switch (status) {
		case INIT:
			status = MODE1;
			break;
		case MODE1:
			led_config();
			counter_1 = T_RED;
			counter_2 = T_GREEN;
			update7SEG_buffer_auto(counter_1, counter_2);
			setTimer0(T_GREEN*1000);
			setTimer4(1000);
			status = RED_GREEN;
			break;
		case RED_GREEN:
			led_config();
			if (timer4_flag == 1) {
				counter_1--;
				counter_2--;
				if (counter_2 <= 0) counter_2 = T_AMBER;
				update7SEG_buffer_auto(counter_1, counter_2);
				setTimer4(1000);
			}
			if (timer0_flag == 1) {
				setTimer0(T_AMBER*1000);
				status = RED_AMBER;
			}
			break;
		case RED_AMBER:
			led_config();
			if (timer4_flag == 1) {
				counter_1--;
				counter_2--;
				if (counter_1 <= 0) {
					counter_1 = T_GREEN;
					counter_2 = T_RED;
				}
				update7SEG_buffer_auto(counter_1, counter_2);
				setTimer4(1000);
			}
			if (timer0_flag == 1) {
				setTimer0(T_GREEN*1000);
				status = GREEN_RED;
			}
			break;
		case GREEN_RED:
			led_config();
			if (timer4_flag == 1) {
				counter_1--;
				counter_2--;
				if (counter_1 <= 0) counter_1 = T_AMBER;
				update7SEG_buffer_auto(counter_1, counter_2);
				setTimer4(1000);
			}
			if (timer0_flag == 1) {
				setTimer0(T_AMBER*1000);
				status = AMBER_RED;
			}
			break;
		case AMBER_RED:
			led_config();
			if (timer4_flag == 1) {
				counter_1--;
				counter_2--;
				if (counter_1 <= 0) {
					counter_1 = T_RED;
					counter_2 = T_GREEN;
				}
				update7SEG_buffer_auto(counter_1, counter_2);
				setTimer4(1000);
			}
			if (timer0_flag == 1) {
				setTimer0(T_GREEN*1000);
				status = RED_GREEN;
			}
			break;
		default:
			break;
	}
}
