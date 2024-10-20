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

u8 DIO_u8SetPinValue(u8 L_u8Port ,u8 L_u8Pin ,u8 L_u8Value)
{
	if(L_u8Value == HIGH)
	{
		switch(L_u8Port)
		{
		case PORTA : SET_BIT(PORTA_REG , L_u8Pin); break ;
		case PORTB : SET_BIT(PORTB_REG , L_u8Pin); break ;
		case PORTC : SET_BIT(PORTC_REG , L_u8Pin); break ;
		case PORTD : SET_BIT(PORTD_REG , L_u8Pin); break ;
		default : return ERROR ; break ;
		}
	}
	else if(L_u8Value == LOW)
	{
		switch(L_u8Port)
		{
		case PORTA : CLEAR_BIT(PORTA_REG , L_u8Pin); break ;
		case PORTB : CLEAR_BIT(PORTB_REG , L_u8Pin); break ;
		case PORTC : CLEAR_BIT(PORTC_REG , L_u8Pin); break ;
		case PORTD : CLEAR_BIT(PORTD_REG , L_u8Pin); break ;
		default : return ERROR ; break ;
		}
	}
	else
	{
		return ERROR ;
	}
	return NO_ERROR ;
}
u8 DIO_u8SetPinDirection(u8 L_u8Port ,u8 L_u8Pin ,u8 L_u8Direction)
{
	if(L_u8Direction== OUTPUT)
	{
		switch(L_u8Port)
		{
		case PORTA : SET_BIT(DDRA_REG , L_u8Pin); break ;
		case PORTB : SET_BIT(DDRB_REG , L_u8Pin); break ;
		case PORTC : SET_BIT(DDRC_REG , L_u8Pin); break ;
		case PORTD : SET_BIT(DDRD_REG , L_u8Pin); break ;
		default : return ERROR ; break ;
		}
	}
	else if(L_u8Direction == INPUT)
	{
		switch(L_u8Port)
		{
		case PORTA : CLEAR_BIT(DDRA_REG , L_u8Pin); break ;
		case PORTB : CLEAR_BIT(DDRB_REG , L_u8Pin); break ;
		case PORTC : CLEAR_BIT(DDRC_REG , L_u8Pin); break ;
		case PORTD : CLEAR_BIT(DDRD_REG , L_u8Pin); break ;
		default : return ERROR ; break ;
		}
	}
	else
	{
		return ERROR ;
	}

	return NO_ERROR ;
}

u8 DIO_u8GET_BIT(u8 L_u8Port ,u8 L_u8Pin )
{
	u8 L_u8pinval ;
	switch(L_u8Port)
	{
	case PORTA :L_u8pinval = GET_BIT(PINA_REG , L_u8Pin); break ;
	case PORTB :L_u8pinval = GET_BIT(PINB_REG , L_u8Pin); break ;
	case PORTC :L_u8pinval = GET_BIT(PINC_REG , L_u8Pin); break ;
	case PORTD :L_u8pinval = GET_BIT(PIND_REG , L_u8Pin); break ;
	default : return ERROR ; break ;
	}

	return L_u8pinval ;
}

u8 DIO_u8GetPort(u8 L_u8Port )
{
	u8 L_u8pinval ;
	switch(L_u8Port)
	{
	case PORTA :L_u8pinval = PINA_REG; break ;
	case PORTB :L_u8pinval = PINB_REG; break ;
	case PORTC :L_u8pinval = PINC_REG; break ;
	case PORTD :L_u8pinval = PIND_REG; break ;
	default : return ERROR ; break ;
	}

	return L_u8pinval ;
}

u8 DIO_u8SetPortValue(u8 L_u8Port ,u8 L_u8Value)
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
u8 DIO_u8SetPortDirection(u8 L_u8Port ,u8 L_u8Direction)
{
	if(L_u8Direction==OUTPUT)
		L_u8Direction =0xFF;
	else
	{
		L_u8Direction =0x00;
	}
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
