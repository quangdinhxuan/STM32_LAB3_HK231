/*
 * fsm_automatic.h
 *
 *  Created on: Oct 23, 2023
 *      Author: Admin
 */

#ifndef INC_FSM_AUTOMATIC_H_
#define INC_FSM_AUTOMATIC_H_

#include"global.h"



extern int tmp_red;
extern int tmp_yellow;
extern int tmp_green;
extern int enable_trigger;
extern int red_time;
extern int green_time;
extern int yellow_time;

void update_countdown(int mode);
void timechange(int*a,int*b);
void enablechange();
void timeforver(int num0, int num1);
void timeforhor(int num0, int num1);
void number_for2led(int duration, int *index_0, int *index_1);
void fsm_automatic_run();
#endif /* INC_FSM_AUTOMATIC_H_ */
