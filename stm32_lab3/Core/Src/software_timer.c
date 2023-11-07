/*
 * software_timer.c
 *
 *  Created on: Oct 9, 2023
 *      Author: Admin
 */
#include "software_timer.h"
int tick=1;
int timer_counter1=0;
int timer_counter[3]={0,0,0};
int timer_flag[3]={0,0,0};
int timer_flag1=0;
void setTimer(int number, int duration){
	timer_counter[number]=duration/tick;
	timer_flag[number]=0;
}
void setTimer1(int duration){
	timer_counter1=duration/tick;
	timer_flag1=0;
}

void timerRun(int number){
	if(timer_counter[number]>0)
	{
		timer_counter[number]--;
		if(timer_counter[number]<=0){
			timer_flag[number]=1;
		}
	}
}
void timerRun1(){
	if(timer_counter1>0)
	{
		timer_counter1--;
		if(timer_counter1<=0){
			timer_flag1=1;
		}
	}
}
