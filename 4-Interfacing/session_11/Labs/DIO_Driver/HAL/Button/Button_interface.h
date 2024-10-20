/*
 * Button_interface.h
 *
 *  Created on: Jul 28, 2024
 *      Author: Elmag
 */

#ifndef BUTTON_BUTTON_INTERFACE_H_
#define BUTTON_BUTTON_INTERFACE_H_

#include "../../LIB/STD_Types.h"
#include "../../MCAL/DIO/DIO_interface.h"

#define BUTTON1 0
#define BUTTON2 1

void Button_Init(u8_t L_u8ButtonNum);
u8_t Button_u8GetButtonstatus(u8_t L_u8ButtonNum);
void Button_voidWaitForButton(u8_t L_u8ButtonNum);

#endif /* BUTTON_BUTTON_INTERFACE_H_ */
