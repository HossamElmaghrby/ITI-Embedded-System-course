/*
 * LCD_program.c
 *
 *  Created on: Jul 29, 2024
 *      Author: Elmag
 */

#include "../../LIB/STD_Types.h"
#include "../../LIB/Bit_Math.h"
#include "../../MCAL/DIO/DIO_interface.h"

#include "LCD_config.h"
#include "LCD_interface.h"
#include "LCD_private.h"
#include <util/delay.h>

void HLCD_voidinit()
{
	DIO_u8SetPortDirection(LCD_DATA_PORT ,OUTPUT);
	DIO_u8SetPinDirection(LCD_CONTROL_PORT ,LCD_RS_PIN ,OUTPUT);
	DIO_u8SetPinDirection(LCD_CONTROL_PORT ,LCD_RW_PIN ,OUTPUT);
	DIO_u8SetPinDirection(LCD_CONTROL_PORT ,LCD_E_PIN ,OUTPUT);

	_delay_ms(30);
	HLCD_voidCommand(0x38);
	_delay_ms(1);
	HLCD_voidCommand(LCD_Display_Mode1);
	_delay_ms(1);
	HLCD_voidCommand(LCD_Clear_Screen);
	_delay_ms(2);
	HLCD_voidCommand(LCD_Entry_Mode1);


}

void HLCD_voidCommand(u8_t command)
{
	DIO_u8SetPinValue(LCD_CONTROL_PORT , LCD_RS_PIN ,LOW );
	DIO_u8SetPinValue(LCD_CONTROL_PORT , LCD_RW_PIN ,LOW );
	DIO_u8SetPortValue(LCD_DATA_PORT ,command );

	HLCD_voidSendPulse();
}
void HLCD_voidSetDDRAM_Address(u8_t address)
{
	SetBit(address,7);
	HLCD_voidCommand(address);
}

void static HLCD_voidSendPulse(void)
{
	DIO_u8SetPinValue(LCD_CONTROL_PORT ,LCD_E_PIN ,HIGH);
	_delay_ms(1);
	DIO_u8SetPinValue(LCD_CONTROL_PORT ,LCD_E_PIN ,LOW);
	_delay_ms(1);
}

void HLCD_SendData(u8_t data)
{
	DIO_u8SetPinValue(LCD_CONTROL_PORT , LCD_RS_PIN ,HIGH);
	DIO_u8SetPinValue(LCD_CONTROL_PORT , LCD_RW_PIN ,LOW);

	DIO_u8SetPortValue(LCD_DATA_PORT ,data);

	HLCD_voidSendPulse();
}
