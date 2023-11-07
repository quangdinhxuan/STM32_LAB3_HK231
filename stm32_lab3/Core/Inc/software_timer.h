/*
 * software_time.h
 *
 *  Created on: Oct 9, 2023
 *      Author: Admin
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_
#include"global.h"
extern int tick;
extern int timer_flag[3];
extern int timer_flag1;
void setTimer(int count,int duration);
void setTimer1(int duration);
void timerRun(int count);
void timerRun1();



#endif /* INC_SOFTWARE_TIMER_H_ */
