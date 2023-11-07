/*
 * button.h
 *
 *  Created on: Oct 23, 2023
 *      Author: Admin
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_


#include "global.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

extern int button_flag[3];



void getKeyInput();
int isButtonPressed(int index);




#endif /* INC_BUTTON_H_ */


