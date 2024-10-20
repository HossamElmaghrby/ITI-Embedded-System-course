/*
 * TIM0_program.c
 *
 *  Created on: Aug 1, 2024
 *      Author: Mohammed Mansour
 */


#include "../../LIB/STD_Types.h"
#include "../../LIB/Bit_Math.h"

#include "TIM0_private.h"
#include "TIM0_config.h"
#include "TIM0_interface.h"

u32_t NoCounts;
u32_t preload;

void (* func_ptr)(void);

void TIM0_Init(void)
{
	// Normal Mode
	CleartBit(TCCR0_Register, WGM00);
	CleartBit(TCCR0_Register, WGM01);

	// Enable Overflow Interrupt
	SetBit(TIMSK_Register, TOIE0);


}

void TIM0_SetValueUS(u32_t us)
{
	// F_CPU = 8Mhz
	// Prescaler 8
	// Timer Freq = 1MHz
	// Tick_Time = 1uS
	// OVF Time = 2^(8 bits) * 1uS = 256uS

	NoCounts = us/256;
	u32_t mod = us%256;
	preload = 256 - mod;

	TCNT0_Register = preload;

	// Set Clock Source (Prescaler: 8)
	CleartBit(TCCR0_Register, CS00);
	SetBit(TCCR0_Register, CS01);
	CleartBit(TCCR0_Register, CS02);
}

void TIM0_Disable(void)
{
	// Disable Timer (No clk)
	CleartBit(TCCR0_Register, CS00);
	CleartBit(TCCR0_Register, CS01);
	CleartBit(TCCR0_Register, CS02);
}

void TIM0_SetOVFCallback(void (* ptr)(void))
{
	func_ptr = ptr;
}

void __vector_11(void)
{
	static u32_t counter = 0;
	if(counter == NoCounts)
	{
		func_ptr();
		counter = 0;
		TCNT0_Register = preload;
	}
	counter++;
}
