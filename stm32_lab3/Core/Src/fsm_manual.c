/*
 * fsm_manual.c
 *
 *  Created on: Oct 23, 2023
 *      Author: Admin
 */
#include"fsm_manual.h"

void button1_work(){
	if (isButtonPressed(0) == 1){
		tmp_red = 1;// use for count and set value
		tmp_yellow= 1;// use for count and set value
		tmp_green = 1;// use for count and set value
		reset_LED();
		setTimer1(50); //time blinky led
		if(status==RED_GREEN||status==RED_YELLOW)status=MAN_RED;
		else if(status==GREEN_RED)status=MAN_GREEN;
		else if(status==YELLOW_RED)status=MAN_YELLOW;
		else if (status == MAN_RED) status = MAN_YELLOW;
		else if (status == MAN_YELLOW) status = MAN_GREEN;
		else if (status == MAN_GREEN) status = INIT;

	}

}

void button2_work(){
	if (isButtonPressed(1) == 1){
		if (status == MAN_RED){
			tmp_red ++;
			if (tmp_red > 99){
				tmp_red = 0;
			}
		}
		else if (status == MAN_YELLOW){
			tmp_yellow ++;
			if (tmp_yellow > 99){
				tmp_yellow = 0;
			}
		}
		else if (status == MAN_GREEN){
			tmp_green ++;
			if (tmp_green > 99){
				tmp_green = 0;
			}
		}
	}
}


void button3_work(){
	if (isButtonPressed(2) == 1){
		if (status == MAN_RED){
			red_time = tmp_red*100;
		}
		else if (status == MAN_YELLOW){
			yellow_time = tmp_yellow*100;
		}
		else if (status == MAN_GREEN){
			green_time = tmp_green*100;
		}
	}
}





void fsm_manual_run(){
	int a = 0;
	int b = 0;
	switch(status){
	case MAN_RED:
		blinky_red_led();
		number_for2led(tmp_red, &a, &b);
		timeforver(a,b);
		timeforhor(0, 1);

		enablechange();
		button1_work();
		button2_work();
		button3_work();
		break;
	case MAN_YELLOW:
		blinky_yellow_led();
		number_for2led(tmp_yellow, &a, &b);
		timeforver(a, b);
		timeforhor(0, 2);

		enablechange();
		button1_work();
		button2_work();
		button3_work();
		break;
	case MAN_GREEN:
		blinky_green_led();
		number_for2led(tmp_green, &a, &b);
		timeforver(a, b);
		timeforhor(0, 3);

		enablechange();

		button2_work();
		button3_work();
		button1_work();
		//check the the time is valid or invalid, and change time to valid
		if (red_time > (yellow_time + green_time)){
				green_time = red_time-yellow_time;

			}
			else if (red_time < (yellow_time + green_time)){
				red_time  = yellow_time + green_time;
			}

		break;
	default:
		break;
	}
}
