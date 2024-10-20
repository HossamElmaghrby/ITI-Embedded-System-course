/*
 * Button_program.c
 *
 *  Created on: Jul 28, 2024
 *      Author: Elmag
 */
#include "Button_config.h"
#include "Button_interface.h"
#include "Button_private.h"
void Button_Init(u8_t L_u8ButtonNum)
{
   switch(L_u8ButtonNum)
   {
	case BUTTON1: DIO_u8SetPinDirection(BUTTON1_PORT , BUTTON1_PIN , OUTPUT); break ;
	case BUTTON2: DIO_u8SetPinDirection(BUTTON2_PORT , BUTTON2_PIN , OUTPUT); break ;
   }
}

u8_t Button_u8GetButtonstatus(u8_t L_u8ButtonNum)
{
	u8_t button_vall ;
	switch(L_u8ButtonNum)
	{
	case BUTTON1:button_vall =  DIO_u8GetBit(BUTTON1_PORT , BUTTON1_PIN); break ;
	case BUTTON2:button_vall = DIO_u8GetBit(BUTTON2_PORT , BUTTON2_PIN); break ;
	}
	return button_vall ;
}
void Button_voidWaitForButton(u8_t L_u8ButtonNum)
{

}
