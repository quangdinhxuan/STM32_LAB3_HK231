/*
 * fsm_automatic.c
 *
 *  Created on: Oct 23, 2023
 *      Author: Admin
 */

#include"fsm_automatic.h"

int red_time ;
int yellow_time ;
int green_time ;
int tmp_red = 5;
int tmp_yellow = 2;
int tmp_green = 3;

int enable_trigger = 0;

void numberdisplay2led_ba(int duration, int *a, int *b){
	*a = duration/10;
	*b = duration%10;
}

void update_countdown(int mode){
	if (mode == RED_GREEN){
		tmp_red = red_time/100 - 1;
		tmp_green = green_time/100 -1;
	}
	else if (mode == RED_YELLOW){
		tmp_yellow = yellow_time/100 - 1;
	}
	else if (mode == GREEN_RED){
		tmp_green = green_time/100 - 1;
		tmp_red = red_time/100 - 1;
	}
	else if (mode == YELLOW_RED){
		tmp_yellow = yellow_time/100 - 1;
	}
}
//this function for display 0.5s two number between 2led segment
void enablechange(){
	if (timer_flag[1] == 1){
		if (enable_trigger == 1) enable_trigger = 0;
		else if (enable_trigger == 0) enable_trigger = 1;
		setTimer(1,50);
	}
}


void timeforhor(int num0, int num1){
	if (enable_trigger == 0){
		HAL_GPIO_WritePin(en0_GPIO_Port, en0_Pin, RESET);
		HAL_GPIO_WritePin(en1_GPIO_Port, en1_Pin, SET);
		display7SEGver(num0);
	}
	else if (enable_trigger == 1){
		HAL_GPIO_WritePin(en0_GPIO_Port, en0_Pin, SET);
		HAL_GPIO_WritePin(en1_GPIO_Port, en1_Pin, RESET);
		display7SEGver(num1);
	}
}
void timeforver(int num0, int num1){
	if (enable_trigger == 0){
		HAL_GPIO_WritePin(en2_GPIO_Port, en2_Pin, RESET);
		HAL_GPIO_WritePin(en3_GPIO_Port, en3_Pin, SET);
		display7SEGhor(num0);
	}
	else if (enable_trigger == 1){
		HAL_GPIO_WritePin(en2_GPIO_Port, en2_Pin, SET);
		HAL_GPIO_WritePin(en3_GPIO_Port, en3_Pin, RESET);
		display7SEGhor(num1);
	}
}
void fsm_automatic_run(){
	int index0 = 0;int index1 = 0; // used for 7seg VER INDEX0_INDEX1
	int index2 = 0;int index3 = 0; // used for 7seg HOR INDEX2_INDEX3
	switch(status){
	case INIT:
		status = RED_GREEN;
		update_countdown(RED_GREEN);
		setTimer(0,green_time); //time duration for 7segleg
		setTimer(1,50); // time duration for enable trigger
		setTimer(2,100); // time duration for reducing 1 second
		enable_trigger = 0;
		break;
	case RED_GREEN:
		set_LED_RED_ver();
		set_LED_GREEN_hor();
		if (timer_flag[0] == 1){
			status = RED_YELLOW;
			setTimer(0,yellow_time);
			update_countdown(RED_YELLOW);
		}
		numberdisplay2led_ab(tmp_red, &index0, &index1);
		numberdisplay2led_ab(tmp_green, &index2, &index3);
		timeforver(index0, index1);
		timeforhor(index2, index3);
		enablechange();
		if (timer_flag[2] == 1){
			tmp_red--;
			tmp_green--;
			setTimer(2,100);
		}
		button1_work();
		break;
	case RED_YELLOW:
		set_LED_RED_ver();
		set_LED_YELLOW_hor();

		if (timer_flag[0] == 1){
			status =GREEN_RED;
			setTimer(0,green_time);
			update_countdown(GREEN_RED);
		}
		numberdisplay2led_ab(tmp_red, &index0, &index1);
		numberdisplay2led_ab(tmp_yellow, &index2, &index3);
		timeforver(index0, index1);
		timeforhor(index2, index3);
		enablechange();
		if (timer_flag[2] == 1){
					tmp_red--;
					tmp_yellow--;
					setTimer(2,100);
			}
		button1_work();
		break;
	case GREEN_RED:
		set_LED_GREEN_ver();
		set_LED_RED_hor();
		if (timer_flag[0] == 1){
			status = YELLOW_RED;
			setTimer(0,yellow_time);
			update_countdown(YELLOW_RED);
		}
		numberdisplay2led_ab(tmp_green, &index0, &index1);
		numberdisplay2led_ab(tmp_red, &index2, &index3);
		timeforver(index0, index1);
		timeforhor(index2, index3);
		enablechange();
		if (timer_flag[2] == 1){
			tmp_green--;
			tmp_red--;
			setTimer(2,100);
		}
		button1_work();
		break;
	case YELLOW_RED:
		set_LED_YELLOW_ver();
		set_LED_RED_hor();
		if (timer_flag[0] == 1){
			status = RED_GREEN;
			setTimer(0,yellow_time);
			update_countdown(RED_GREEN);
		}
		numberdisplay2led_ba(tmp_yellow, &index0, &index1);
		numberdisplay2led_ba(tmp_red, &index2, &index3);

		timeforver(index0, index1);
		timeforhor(index2, index3);
		enablechange();
		if (timer_flag[2] == 1){
			tmp_yellow--;
			tmp_red--;
			setTimer(2,100);
		}
		button1_work();
		break;

	}
}
