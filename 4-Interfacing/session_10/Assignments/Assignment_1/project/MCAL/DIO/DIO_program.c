/*
 * program.c
 *
 *  Created on: Jul 25, 2024
 *      Author: Elmag
 */


#include "../../LIB/STD_Types.h"
#include "../../LIB/Bit_Math.h"

#include "DIO_private.h"
#include "DIO_interface.h"

u8_t DIO_u8SetPinValue(u8_t L_u8Port ,u8_t L_u8Pin ,u8_t L_u8Value)
{
	if(L_u8Value == HIGH)
	{
		switch(L_u8Port)
		{
		case PORTA : SetBit(PORTA_REG , L_u8Pin); break ;
		case PORTB : SetBit(PORTB_REG , L_u8Pin); break ;
		case PORTC : SetBit(PORTC_REG , L_u8Pin); break ;
		case PORTD : SetBit(PORTD_REG , L_u8Pin); break ;
		default : return ERROR ; break ;
		}
	}
	else if(L_u8Value == LOW)
	{
		switch(L_u8Port)
		{
		case PORTA : CleartBit(PORTA_REG , L_u8Pin); break ;
		case PORTB : CleartBit(PORTB_REG , L_u8Pin); break ;
		case PORTC : CleartBit(PORTC_REG , L_u8Pin); break ;
		case PORTD : CleartBit(PORTD_REG , L_u8Pin); break ;
		default : return ERROR ; break ;
		}
	}
	else
	{
		return ERROR ;
	}
	return NO_ERROR ;
}
u8_t DIO_u8SetPinDirection(u8_t L_u8Port ,u8_t L_u8Pin ,u8_t L_u8Direction)
{
	if(L_u8Direction== OUTPUT)
	{
		switch(L_u8Port)
		{
		case PORTA : SetBit(DDRA_REG , L_u8Pin); break ;
		case PORTB : SetBit(DDRB_REG , L_u8Pin); break ;
		case PORTC : SetBit(DDRC_REG , L_u8Pin); break ;
		case PORTD : SetBit(DDRD_REG , L_u8Pin); break ;
		default : return ERROR ; break ;
		}
	}
	else if(L_u8Direction == INPUT)
	{
		switch(L_u8Port)
		{
		case PORTA : CleartBit(DDRA_REG , L_u8Pin); break ;
		case PORTB : CleartBit(DDRB_REG , L_u8Pin); break ;
		case PORTC : CleartBit(DDRC_REG , L_u8Pin); break ;
		case PORTD : CleartBit(DDRD_REG , L_u8Pin); break ;
		default : return ERROR ; break ;
		}
	}
	else
	{
		return ERROR ;
	}

	return NO_ERROR ;
}
u8_t DIO_u8SetPortValue(u8_t L_u8Port ,u8_t L_u8Value)
{
	switch(L_u8Port)
	{
	case PORTA: PORTA_REG = L_u8Value; break;
	case PORTB: PORTB_REG = L_u8Value; break;
	case PORTC: PORTC_REG = L_u8Value; break;
	case PORTD: PORTD_REG = L_u8Value; break;
	default: return ERROR; break;
	}
	return NO_ERROR ;
}
u8_t DIO_u8SetPortDirection(u8_t L_u8Port ,u8_t L_u8Direction)
{
	switch(L_u8Port)
	{
		case PORTA: DDRA_REG = L_u8Direction; break;
		case PORTB: DDRB_REG = L_u8Direction; break;
		case PORTC: DDRC_REG = L_u8Direction; break;
		case PORTD: DDRD_REG = L_u8Direction; break;
		default: return ERROR; break;
	}
	return NO_ERROR ;
}
