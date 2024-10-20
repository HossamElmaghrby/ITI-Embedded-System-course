/*
 * EXTI_program.c
 *
 *  Created on: Jul 30, 2024
 *      Author: Elmag
 */
#include "../../LIB/STD_Types.h"
#include "../../LIB/Bit_Math.h"

#include "EXTI_config.h"
#include "EXTI_interface.h"
#include "EXTI_pirvate.h"



void EXTI_Init()
{
#if EXTI0_MODE  == EXTI_LOW_LEVEL
	CleartBit(MCUCR_Register ,ISC00);
	CleartBit(MCUCR_Register ,ISC01);
#elif EXTI0_MODE  == EXTI_ON_CHANGE
	SetBit(MCUCR_Register ,ISC00));
	CleartBit(MCUCR_Register ,ISC01);
#elif EXTI0_MODE  == EXTI_FALLING
	CleartBit(MCUCR_Register ,ISC00);
	SetBit(MCUCR_Register ,ISC01);
#elif EXTI0_MODE  == EXTI_RISING
	SetBit(MCUCR_Register ,ISC00);
	SetBit(MCUCR_Register ,ISC01);
#endif

#if EXTI1_MODE  == EXTI_LOW_LEVEL
	CleartBit(MCUCR_Register ,ISC00);
	CleartBit(MCUCR_Register ,ISC11);
#elif EXTI1_MODE  == EXTI_ON_CHANGE
	SetBit(MCUCR_Register ,ISC00));
	CleartBit(MCUCR_Register ,ISC11);
#elif EXTI1_MODE  == EXTI_FALLING
	CleartBit(MCUCR_Register ,ISC00);
	SetBit(MCUCR_Register ,ISC11);
#elif EXTI1_MODE  == EXTI_RISING
	SetBit(MCUCR_Register ,ISC00);
	SetBit(MCUCR_Register ,ISC11);

#endif


#if EXTI2_MODE  == EXTI_FALLING
	CleartBit(MCUCSR_Register ,ISC2);
#elif EXTI2_MODE  == EXTI_RISING
	SetBit(MCUCSR_Register ,ISC2);

#endif

}


void EXTI_Enable(u8_t EXTI_Num)
{
	switch(EXTI_Num)
	{
	case EXTI0 : SetBit(GICR_Register ,INT0);break ;
	case EXTI1 : SetBit(GICR_Register ,INT1);break ;
	case EXTI2 : SetBit(GICR_Register ,INT2);break ;
	}
}

void EXTI_Disable(u8_t EXTI_Num)
{
	switch(EXTI_Num)
	{
	case EXTI0 : CleartBit(GICR_Register ,INT0);break ;
	case EXTI1 : CleartBit(GICR_Register ,INT1);break ;
	case EXTI2 : CleartBit(GICR_Register ,INT2);break ;
	}
}

void Exti_setCallback(u8_t EXTI_num,void (*ptr)())
{
	switch(EXTI_num)
	{
	case EXTI0 : ptr1 = ptr;break ;
	case EXTI1 : ptr2 = ptr;break ;
	case EXTI2 : ptr3 = ptr;break ;
	}
}
void __vector_1(void)
{
	ptr1();
}
void __vector_2(void)
{
	ptr2();
}
void __vector_3(void)
{
	ptr3();
}
