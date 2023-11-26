/*
 * seven_seg.h
 *
 *  Created on: Nov 3, 2023
 *      Author: lequo
 */

#ifndef INC_SEVEN_SEG_H_
#define INC_SEVEN_SEG_H_

void display7SEG(int num);
void update7SEG(int index);
void update7SEG_buffer_auto(int duration_1, int duration_2);
void update7SEG_buffer_manual(int mode, int duration);

#endif /* INC_SEVEN_SEG_H_ */
