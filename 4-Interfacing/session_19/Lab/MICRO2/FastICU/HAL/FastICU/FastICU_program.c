/*
 * FastICU_program.c
 *
 *  Created on: Aug 6, 2024
 *      Author: Mohammed Mansour
 */


#include "../../LIB/STD_Types.h"

#include "../../MCAL/DIO/DIO_interface.h"
#include "../../MCAL/TIM1/TIM1_interface.h"

#include "FastICU_private.h"
#include "FastICU_config.h"
#include "FastICU_interface.h"

u16 t_on = 0;
u16 period = 0;

void FastICU_Init(void)
{
	DIO_u8SetPinDirection(PORTD, PIN6, INPUT);
	TIM1_voidICUInit();
	TIM1_SetEdge(ICU_EDGE_RISING);
	TIM1_setCallback(FastICU_Process);

}

u16 FastICU_GetOnTime(void)
{
	return t_on;
}

u16 FastICU_GetOffTime(void)
{
	return period - t_on;
}

u16 FastICU_GetPeriod(void)
{
	return period;
}

void FastICU_Process(void)
{
	static u8 state = FASTICU_FIRST_RISING;
	static u16 point_1 = 0;
	static u16 point_2 = 0;
	static u16 point_3 = 0;

	switch(state)
	{
	case FASTICU_FIRST_RISING:
		point_1 = TIM1_GetICRValue();
		TIM1_SetEdge(ICU_EDGE_FALLING);
		state = FASTICU_FALLING;
		break;
	case FASTICU_FALLING:
		point_2 = TIM1_GetICRValue();
		TIM1_SetEdge(ICU_EDGE_RISING);
		state = FASTICU_SECOND_RISING;
		break;
	case FASTICU_SECOND_RISING:
		point_3 = TIM1_GetICRValue();
		TIM1_SetEdge(ICU_EDGE_RISING);
		state = FASTICU_FIRST_RISING;
		period = point_3 - point_1;
		t_on = point_2 - point_1;
		break;
	}
}
