/*
 * ICU_program.c
 *
 *  Created on: Aug 6, 2024
 *      Author: Mohammed Mansour
 */

#include "../../LIB/STD_Types.h"

#include "../../MCAL/DIO/DIO_interface.h"
#include "../../MCAL/EXTI/EXTI_interface.h"
#include "../../MCAL/TIM1/TIM1_interface.h"

#include "ICU_private.h"
#include "ICU_config.h"
#include "ICU_interface.h"

void ICU_Init(void)
{
#if ICU_EXTI_CHANNEL == EXTI0
	DIO_u8SetPinDirection(PORTD, PIN2, INPUT);
#elif ICU_EXTI_CHANNEL == EXTI1
	DIO_u8SetPinDirection(PORTD, PIN3, INPUT);
#elif ICU_EXTI_CHANNEL == EXTI2
	DIO_u8SetPinDirection(PORTB, PIN2, INPUT);
#endif

	EXTI_SetMode(ICU_EXTI_CHANNEL, EXTI_MODE_RISING);
	EXTI_SetCallback(ICU_EXTI_CHANNEL, EXTI_Callback);
	EXTI_Enable(ICU_EXTI_CHANNEL);

	TIM1_voidInit();
	TIM1_ClearCounterValue();
}

u16 ICU_GetOnTimeUs(void)
{
	return t_on;
}

u16 ICU_GetOFFTimeUs(void)
{
	return period - t_on;
}
u16 ICU_GetPeriodUs(void)
{
	return period;
}

void EXTI_Callback(void)
{
	static u8 state = ICU_STATE_WAIT_FOR_RISINGEDGE1;

	switch(state)
	{
	case ICU_STATE_WAIT_FOR_RISINGEDGE1:
		TIM1_ClearCounterValue();
		EXTI_SetMode(ICU_EXTI_CHANNEL, EXTI_MODE_FALLING);
		state = ICU_STATE_WAIT_FOR_FALLINGEDGE;
		break;
	case ICU_STATE_WAIT_FOR_FALLINGEDGE:
		t_on = TIM1_GetCounterValueUs();
		EXTI_SetMode(ICU_EXTI_CHANNEL, EXTI_MODE_RISING);
		state = ICU_STATE_WAIT_FOR_RISINGEDGE2;
		break;
	case ICU_STATE_WAIT_FOR_RISINGEDGE2:
		period = TIM1_GetCounterValueUs();
		EXTI_SetMode(ICU_EXTI_CHANNEL, EXTI_MODE_RISING);
		state = ICU_STATE_WAIT_FOR_RISINGEDGE1;
		TIM1_ClearCounterValue();
		break;
	}
}
