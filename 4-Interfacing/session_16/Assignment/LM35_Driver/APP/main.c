/*
 * main.c
 *
 *  Created on: Jul 25, 2024
 *      Author: Elmag
 */

#include  "../LIB/STD_Types.h"

#include "../HAL/LM35/LM35_interface.h"

#include "../MCAL/ADC/ADC_interface.h"

#include "../HAL/LCD/LCD_interface.h"

#include <util/delay.h>




int main()
{
	u32_t temp ;
	HLCD_voidinit();
	LM35_Init();
	HLCD_voidCommand(LCD_Clear_Screen);
	HLCD_GOTO_XY(1,1);

  while(1)
  {
    temp =  LM35_GetTemp();
    LCD_display_number(temp);
    HLCD_GOTO_XY(1,1);
    if(temp != LM35_GetTemp() )
    HLCD_voidCommand(LCD_Clear_Screen);
  }

  return 0 ;
}
