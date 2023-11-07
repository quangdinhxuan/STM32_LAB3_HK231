/*
 * global.h
 *
 *  Created on: Oct 23, 2023
 *      Author: Admin
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_
#include "software_timer.h"
#include"button.h"
#include"main.h"
#include"led.h"
#include"fsm_automatic.h"
#include"fsm_manual.h"

extern int status;
extern int red_time;
extern int yellow_time;
extern int green_time;

#define INIT 1
#define RED_GREEN 2
#define RED_YELLOW 3
#define GREEN_RED 4
#define YELLOW_RED 5


extern int enable_trigger;


#define MAN_RED 12
#define MAN_GREEN 13
#define MAN_YELLOW 14


#endif /* INC_GLOBAL_H_ */
