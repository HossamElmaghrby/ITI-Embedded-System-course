/*
 * main.c
 *
 *  Created on: Aug 15, 2024
 *      Author: Hossam Bahaa
 */

#include  "../LIB/STD_Types.h"

#include "../HAL/EEPROM/EEPROM_interface.h"
#include "../HAL/LCD/LCD_interface.h"
#include "../HAL/KeyPade/KeyPade_interface.h"
#include "../HAL/LED/LED_interface.h"
#include "../HAL/Servo/Servo_interface.h"
#include <avr/delay.h>
#define SLAVE1 0x12



u32 PASSWORD = 0;
int main()
{

	u8  byte= 0 ,address;
	s8 data ,flage = 0;
	u8 count=3 ;
	u16 input_Pass =0;



	HLCD_voidinit();
	Keypad_init();
	Servo_Init();
	EEPROM_Init();
	LED_voidInit(LED1);
	LED_voidInit(LED3);

	Servo_SetAngle(SERVO1 ,0);
	HLCD_GOTO_XY(1,1);
	HLCD_PrintString(" Wellcome");
	_delay_ms(5000);
	HLCD_voidCommand(LCD_Clear_Screen);


	address = 0 ;
	byte = 0 ;
	//EEPROM_SendByte(0xFF ,address);
	EEPROM_ReadByte(&byte , address);
	if(byte == 0xFF)
	{
		HLCD_PrintString(" Enter pass for first time");
		_delay_ms(5000);
		HLCD_voidCommand(LCD_Clear_Screen);
		while(data != '=')
		{
			data = Keypad_getkey();
			if(data != -1 && data != '=')
			{
				HLCD_SendData('*');
				data-=48 ;
				EEPROM_SendByte(data ,address);
			   PASSWORD+=data ;
			   PASSWORD*=10;
				address++ ;
			}
		}
		 PASSWORD/=10 ;
		EEPROM_SendByte(0xFF ,address);
	}
	else
	{
	   while(byte != 0xFF)
	   {
		   PASSWORD+=byte ;
		   PASSWORD*=10;
		   address++ ;
		   EEPROM_ReadByte(&byte ,address);
	   }
	   PASSWORD/=10 ;
	}
	HLCD_voidCommand(LCD_Clear_Screen);
	while(1)
	{
		data = 0 ;
		input_Pass = 0 ;
		flage = 0;
		count= 3 ;
		HLCD_PrintString(" Enter Password");
		while(count--)
		{
			HLCD_GOTO_XY(2,1);
			while(data != '=')
			{
				data = Keypad_getkey();
				if(data != -1 && data != '=')
				{
					HLCD_SendData('*');
					input_Pass += data-48 ;
					input_Pass*=10 ;
				}
			}
			input_Pass/=10 ;
			HLCD_voidCommand(LCD_Clear_Screen);
			if(input_Pass == PASSWORD)
			{
				flage  = 1 ;
				HLCD_PrintString(" Correct PASS");
				Servo_SetAngle(SERVO1 ,45);

				_delay_ms(5000);

				break ;
			}
			else
			{
				HLCD_PrintString(" Incorrect PASS");
				if(count)
				{
					_delay_ms(5000);
					HLCD_voidCommand(LCD_Clear_Screen);
					HLCD_PrintString(" Try again");
				}
			}
			data = 0 ;
			input_Pass = 0 ;
		}

		if(flage)
		{
			LED_voidSetLEDHigh(LED3);
			_delay_ms(5000);
			LED_voidSetLEDLow(LED3);
			_delay_ms(5000);
			HLCD_voidCommand(LCD_Clear_Screen);
			Servo_SetAngle(SERVO1 ,0);
			HLCD_voidCommand(LCD_Clear_Screen);
			HLCD_PrintString(" Change Password");
			HLCD_GOTO_XY(2,1);
			HLCD_PrintString(" 1-Y or 2-N : ");
			data = 0 ;
			while(1)
			{
				data = Keypad_getkey();
				if(data == '1')
				{
					HLCD_SendData('1');
					_delay_ms(1000);
					HLCD_voidCommand(LCD_Clear_Screen);
					HLCD_PrintString(" Enter new pass");
					HLCD_GOTO_XY(2,1);
					address = 0 ;
					PASSWORD = 0 ;
					while(data != '=')
					{
						data = Keypad_getkey();
						if(data != -1 && data != '=')
						{
							HLCD_SendData('*');
							data-=48 ;
						   EEPROM_SendByte(data ,address);
						   PASSWORD+=data ;
						   PASSWORD*=10;
							address++ ;
						}
					}
					PASSWORD/=10 ;
					EEPROM_SendByte(0xFF ,address);
					break ;
				}
				else if(data == '2')
				{
					HLCD_SendData('2');
					break ;
				}

			}
		}
		else
		{
			LED_voidSetLEDHigh(LED1);
			_delay_ms(5000);
			LED_voidSetLEDLow(LED1);
		}
		HLCD_voidCommand(LCD_Clear_Screen);
		Servo_SetAngle(SERVO1 ,0);
	}
	return 0 ;

}
