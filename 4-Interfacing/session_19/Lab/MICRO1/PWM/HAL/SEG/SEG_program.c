/*
 * SEG_program.c
 *
 *  Created on: Jul 28, 2024
 *      Author: Elmag
 */

#include "../../LIB/STD_Types.h"
#include "../../LIB/Bit_Math.h"
#include "../../MCAL/DIO/DIO_interface.h"

#include "SEG_config.h"
#include "SEG_interfac.h"
#include "SEG_private.h"

void SEG_voidInit(u8_t SEG_NUM)
{

	switch(SEG_NUM)
	{
	case SEG1:
         DIO_u8SetPortDirection(SEG1_PORT ,OUTPUT);
		break ;
	}

}

void SEG_display(u8_t SEG_NUM ,u8_t val)
{
	switch(SEG_NUM)
	{
	case SEG1:
	  DIO_u8SetPortValue(SEG1_PORT ,seg[val]);
	  break ;
	}
}
void SEG_VoidClear(u8_t SEG_NUM)
{
	switch(SEG_NUM)
	{
	DIO_u8SetPinValue(SEG1_PORT , HSEG_PINA ,LOW);
	DIO_u8SetPinValue(SEG1_PORT , HSEG_PINB ,LOW);
	DIO_u8SetPinValue(SEG1_PORT , HSEG_PINC ,LOW);
	DIO_u8SetPinValue(SEG1_PORT , HSEG_PIND ,LOW);
	DIO_u8SetPinValue(SEG1_PORT , HSEG_PINE ,LOW);
	DIO_u8SetPinValue(SEG1_PORT , HSEG_PINF ,LOW);
	DIO_u8SetPinValue(SEG1_PORT , HSEG_PING ,LOW);
	DIO_u8SetPinValue(SEG1_PORT , HSEG_PINH ,LOW);
	break ;
	}

}
