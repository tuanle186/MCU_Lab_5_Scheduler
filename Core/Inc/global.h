/*
 * global.h
 *
 *  Created on: Nov 2, 2023
 *      Author: lequo
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#define INIT 		-1
#define MODE1 		0
#define RED_GREEN 	1
#define RED_AMBER 	2
#define GREEN_RED 	3
#define AMBER_RED 	4

#define MODE2 		5
#define AUTO_RED 	6
#define ADJ_RED		7

#define MODE3 		8
#define AUTO_AMBER	9
#define ADJ_AMBER	10

#define MODE4 		11
#define AUTO_GREEN	12
#define ADJ_GREEN	13


extern int T_RED;
extern int T_AMBER;
extern int T_GREEN;
extern int status;

void led_config();

#endif /* INC_GLOBAL_H_ */
