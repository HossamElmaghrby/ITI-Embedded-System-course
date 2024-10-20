/*
 * main.c
 *
 *  Created on: Jul 25, 2024
 *      Author: Elmag
 */

#include "../HAL/LED/LED_interface.h"
#include "../HAL/SEG/SEG_interfac.h"
#include "../HAL/SEG/SEG_config.h"
#include "../HAL/Button/Button_config.h"
#include "../HAL/Button/Button_interface.h"
#include "../HAL/Button/Button_private.h"

#include "../HAL/LCD/LCD_config.h"
#include "../HAL/LCD/LCD_interface.h"
#include "../HAL/LCD/LCD_private.h"

#include<util/delay.h>
int main()
{

	 HLCD_voidinit();
	 HLCD_voidSetDDRAM_Address(0);
	 HLCD_SendData('H');
	 HLCD_SendData('o');
	 HLCD_SendData('s');
	 HLCD_SendData('s');
	 HLCD_SendData('a');
	 HLCD_SendData('m');

	 HLCD_SendData(' ');
	 HLCD_SendData('B');
	 HLCD_SendData('a');
	 HLCD_SendData('h');
	 HLCD_SendData('a');
	 HLCD_SendData('a');




while(1)
{

}
	return 0 ;
}
