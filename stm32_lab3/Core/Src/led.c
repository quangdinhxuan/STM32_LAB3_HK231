/*
 * led.c
 *
 *  Created on: Nov 6, 2023
 *      Author: Admin
 */


#include"led.h"
void reset_LED(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port,LED_RED_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port,LED_GREEN_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port,LED_YELLOW_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_RED1_GPIO_Port,LED_RED1_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port,LED_GREEN1_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port,LED_YELLOW1_Pin,GPIO_PIN_RESET);
}
void set_LED_RED_ver()
{
	HAL_GPIO_WritePin(LED_RED_GPIO_Port,LED_RED_Pin,GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port,LED_GREEN_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port,LED_YELLOW_Pin,GPIO_PIN_RESET);
}

void set_LED_GREEN_ver(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port,LED_RED_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port,LED_GREEN_Pin,GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port,LED_YELLOW_Pin,GPIO_PIN_RESET);
}

void set_LED_YELLOW_ver(){
	HAL_GPIO_WritePin(LED_RED_GPIO_Port,LED_RED_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_GREEN_GPIO_Port,LED_GREEN_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port,LED_YELLOW_Pin,GPIO_PIN_SET);
}
void set_LED_RED_hor()
{
	HAL_GPIO_WritePin(LED_RED1_GPIO_Port,LED_RED1_Pin,GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port,LED_GREEN1_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port,LED_YELLOW1_Pin,GPIO_PIN_RESET);
}

void set_LED_GREEN_hor(){
	HAL_GPIO_WritePin(LED_RED1_GPIO_Port,LED_RED1_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port,LED_GREEN1_Pin,GPIO_PIN_SET);
	HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port,LED_YELLOW1_Pin,GPIO_PIN_RESET);
}

void set_LED_YELLOW_hor(){
	HAL_GPIO_WritePin(LED_RED1_GPIO_Port,LED_RED1_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_GREEN1_GPIO_Port,LED_GREEN1_Pin,GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_YELLOW1_GPIO_Port,LED_YELLOW1_Pin,GPIO_PIN_SET);
}
void blinky_red_led(){
	if(timer_flag[3]==1){
	setTimer1(50);
	HAL_GPIO_TogglePin(LED_RED_GPIO_Port,LED_RED_Pin);
	HAL_GPIO_TogglePin(LED_RED1_GPIO_Port,LED_RED1_Pin);
	}
}
void blinky_green_led(){
	if(timer_flag[3]==1){
		setTimer1(50);
		HAL_GPIO_TogglePin(LED_GREEN_GPIO_Port,LED_GREEN_Pin);
		HAL_GPIO_TogglePin(LED_GREEN1_GPIO_Port,LED_GREEN1_Pin);
		}
}
void blinky_yellow_led(){
	if(timer_flag[3]==1){
		setTimer1(50);
		HAL_GPIO_TogglePin(LED_YELLOW_GPIO_Port,LED_YELLOW_Pin);
		HAL_GPIO_TogglePin(LED_YELLOW1_GPIO_Port,LED_YELLOW1_Pin);
		}
}
void display7SEGhor(int num){
     	  switch(num){
     	  	  	case 0:
     				  HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
     				  HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
     				  HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
     				  HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
     				  HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, RESET);
     				  HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
     				  HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, SET);
     				  break;
     	  		case 1:
     				  HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, SET);
     				  HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
     				  HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
     				  HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, SET);
     				  HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
     				  HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, SET);
     				  HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, SET);
     				  break;
     	  		case 2:
     				  HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
     				  HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
     				  HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, SET);
     				  HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
     				  HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, RESET);
     				  HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, SET);
     				  HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
     				  break;
     	  		case 3:
     				  HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
     				  HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
     				  HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
     				  HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
     				  HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
     				  HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, SET);
     				  HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
     				  break;
     	  		case 4:
     		  		  HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, SET);
     				  HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
     				  HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
     				  HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, SET);
     				  HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
     				  HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
     				  HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
     				  break;
     			case 5:
     				  HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
     				  HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, SET);
     				  HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
     				  HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
     				  HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
     				  HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
     				  HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
     				  break;
     			case 6:
     				  HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
     				  HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, SET);
     				  HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
     				  HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
     				  HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, RESET);
     				  HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
     				  HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
     				  break;
     			case 7:
     				  HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
     				  HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
     				  HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
     				  HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, SET);
     				  HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
     				  HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, SET);
     				  HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, SET);
     				  break;
     			case 8:
     				  HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
     				  HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
     				  HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
     				  HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
     				  HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, RESET);
     				  HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
     				  HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
     				  break;
     			case 9:
     				  HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
     				  HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
     				  HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
     				  HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
     				  HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
     				  HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
     				  HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
     				  break;

     	  }
       }

void display7SEGver(int num){
     	  switch(num){
     	  	  	case 0:
     				  HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
     				  HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
     				  HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
     				  HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
     				  HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, RESET);
     				  HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, RESET);
     				  HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, SET);
     				  break;
     	  		case 1:
     				  HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, SET);
     				  HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
     				  HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
     				  HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, SET);
     				  HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
     				  HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, SET);
     				  HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, SET);
     				  break;
     	  		case 2:
     				  HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
     				  HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
     				  HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, SET);
     				  HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
     				  HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, RESET);
     				  HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, SET);
     				  HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
     				  break;
     	  		case 3:
     				  HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
     				  HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
     				  HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
     				  HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
     				  HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
     				  HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, SET);
     				  HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
     				  break;
     	  		case 4:
     		  		  HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, SET);
     				  HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
     				  HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
     				  HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, SET);
     				  HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
     				  HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, RESET);
     				  HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
     				  break;
     			case 5:
     				  HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
     				  HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, SET);
     				  HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
     				  HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
     				  HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
     				  HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, RESET);
     				  HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
     				  break;
     			case 6:
     				  HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
     				  HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, SET);
     				  HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
     				  HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
     				  HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, RESET);
     				  HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, RESET);
     				  HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
     				  break;
     			case 7:
     				  HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
     				  HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
     				  HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
     				  HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, SET);
     				  HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
     				  HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, SET);
     				  HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, SET);
     				  break;
     			case 8:
     				  HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
     				  HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
     				  HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
     				  HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
     				  HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, RESET);
     				  HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, RESET);
     				  HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
     				  break;
     			case 9:
     				  HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
     				  HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
     				  HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
     				  HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
     				  HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
     				  HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, RESET);
     				  HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
     				  break;

     	  }
       }
