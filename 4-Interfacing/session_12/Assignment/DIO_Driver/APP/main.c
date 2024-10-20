/*
 * main.c
 *
 *  Created on: Jul 25, 2024
 *      Author: Elmag
 */

#include "../HAL/LED/LED_interface.h"
//#include "../HAL/SEG/SEG_interfac.h"

//#include "../HAL/Button/Button_interface.h"

#include "../HAL/LCD/LCD_interface.h"

#include "../HAL/Keypade/Keypade_interface.h"

#define PASSWORD 1234

#include<util/delay.h>
int main()
{

	s8_t data ,flage = 0;
	u8_t count=3 ;
	u16_t input_Pass =0;
	HLCD_voidinit();
	//Keypad_init();
	//LED_voidInit(LED1);
	//LED_voidInit(LED3);
	HLCD_GOTO_XY(1,1);
	HLCD_PrintString("Wellcome");
	_delay_ms(1000);
	HLCD_voidCommand(LCD_Clear_Screen);
	while(1)
	{
		data = 0 ;
		input_Pass = 0 ;
        flage = 0;
        count= 3 ;
		HLCD_PrintString("Enter Password");
		while(count--)
		{
			HLCD_GOTO_XY(2,1);
			while(data != '=')
			{
				data = Keypad_getkey();
				if(data != -1 && data != '=')
				{
					HLCD_SendData(data);
					input_Pass += data-48 ;
					input_Pass*=10 ;
				}
			}
			input_Pass/=10 ;
			HLCD_voidCommand(LCD_Clear_Screen);
			if(input_Pass == PASSWORD)
			{
				flage  = 1 ;
				HLCD_PrintString("Correct PASS");
				break ;
			}
			else
			{
				HLCD_PrintString("Incorrect PASS");
				if(count)
				{
					_delay_ms(1000);
					HLCD_voidCommand(LCD_Clear_Screen);
					HLCD_PrintString("Try again");
				}
			}
			data = 0 ;
			input_Pass = 0 ;
		}

		if(flage)
		{
			LED_voidSetLEDHigh(LED3);
			_delay_ms(3000);
			LED_voidSetLEDLow(LED3);
		}
		else
		{
			LED_voidSetLEDHigh(LED1);
			_delay_ms(3000);
			LED_voidSetLEDLow(LED1);
		}
		HLCD_voidCommand(LCD_Clear_Screen);
	}
	return 0 ;
}

