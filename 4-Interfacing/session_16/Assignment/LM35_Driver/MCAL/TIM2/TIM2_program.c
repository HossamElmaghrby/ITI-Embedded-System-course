/*
 * TIM0_program.c
 *
 *  Created on: Aug 1, 2024
 *      Author: Mohammed Mansour
 */


#include "../../LIB/STD_Types.h"
#include "../../LIB/Bit_Math.h"
#include "TIM2_interface.h"
#include "TIM2_private.h"
#include "TIM2_config.h"

u32_t NoCounts;
u32_t preload;

void (* func_ptr)(void);

void TIM2_Init(void)
{
	// CTC Mode
	CleartBit(TCCR2_Register, WGM20);
	SetBit(TCCR2_Register, WGM21);

	// Enable Overflow Interrupt
	SetBit(TIMSK_Register, OCIE2);


}

void TIM2_SetValueUS(u32_t us)
{
	// F_CPU = 8Mhz
	// Prescaler 8
	// Timer Freq = 1MHz
	// Tick_Time = 1uS
	// OVF Time = 2^(8 bits) * 1uS = 256uS

	TCNT2_Register = 0;
    NoCounts = 255 ;
    while((us % NoCounts)!=0)
    {
    	NoCounts-- ;
    }
    OCR2_Register = NoCounts ;
    NoCounts = us / NoCounts ;
	// Set Clock Source (Prescaler: 8)
	CleartBit(TCCR2_Register, CS20);
	SetBit(TCCR2_Register, CS21);
	CleartBit(TCCR2_Register, CS22);
}

void TIM2_Disable(void)
{
	// Disable Timer (No clk)
	CleartBit(TCCR2_Register, CS20);
	CleartBit(TCCR2_Register, CS21);
	CleartBit(TCCR2_Register, CS22);
}

void TIM2_SetOVFCallback(void (* ptr)(void))
{
	func_ptr = ptr;
}

void __vector_4(void)
{
	static u32_t counter = 0;
	if(counter == NoCounts)
	{
		func_ptr();
		counter = 0;
		TCNT2_Register = 0;
	}
	counter++;
}
