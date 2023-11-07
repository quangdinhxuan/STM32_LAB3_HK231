/*
 * led.h
 *
 *  Created on: Nov 6, 2023
 *      Author: Admin
 */

#ifndef INC_LED_H_
#define INC_LED_H_

#include"global.h"
void reset_LED();
void set_LED_RED_ver();
void set_LED_GREEN_ver();
void set_LED_YELLOW_ver();
void set_LED_RED_hor();
void set_LED_GREEN_hor();
void set_LED_YELLOW_hor();
void blinky_red_led();
void blinky_green_led();
void blinky_yellow_led();
void display7SEGhor(int num);
void display7SEGver(int num);
#endif /* INC_LED_H_ */
