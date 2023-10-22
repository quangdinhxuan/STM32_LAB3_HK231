/*
 * software_time.h
 *
 *  Created on: Oct 9, 2023
 *      Author: Admin
 */

#ifndef INC_SOFTWARE_TIME_H_
#define INC_SOFTWARE_TIME_H_

extern int timer0_flag;
extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;
extern int timer4_flag;
void setTimer0(int duration);
void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);
void setTimer4(int duration);
void timerRun0();
void timerRun1();
void timerRun2();
void timerRun3();
void timerRun4();


#endif /* INC_SOFTWARE_TIME_H_ */
