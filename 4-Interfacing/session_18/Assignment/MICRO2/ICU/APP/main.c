/*
 * main.c
 *
 *  Created on: Jul 25, 2024
 *      Author: Mohammed Mansour
 */

#include  "../LIB/STD_Types.h"
#include "../HAL/ICU/ICU_interface.h"
#include "../MCAL/DIO/DIO_interface.h"
#include "../MCAL/GIE/GIE_interface.h"
#include "../HAL/LCD/LCD_interface.h"
#include <avr/delay.h>

int main()
{
    LCD_voidInit();
	ICU_Init();
	GIE_Enable();
    LCD_voidSendCommand(LCD_CLEAR_DISPLAY);
    LCD_voidGotoRowCol(0,0);
    LCD_voidPrintStr("T_ON:");
    LCD_voidGotoRowCol(1,0);
    LCD_voidPrintStr("Period:");

	LCD_voidGotoRowCol(0,6);
    LCD_display_number((u16)ICU_GetOnTimeUs());
    ICU_GetPeriodUs();
    LCD_voidGotoRowCol(1,8);
    LCD_display_number((u16)ICU_GetPeriodUs());

	while(1){

	}

	return 0;
}





