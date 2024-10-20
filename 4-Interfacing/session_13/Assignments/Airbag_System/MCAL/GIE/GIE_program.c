/*
 * GIE_program.c
 *
 *  Created on: Jul 30, 2024
 *      Author: Mohammed Mansour
 */


#include "../../LIB/STD_Types.h"
#include "../../LIB/Bit_Math.h"

#include "GIE_private.h"
#include "GIE_interface.h"


void GIE_Enable(void)
{
	SetBit(SREG_Register, I_Bit);
}

void GIE_Disable(void)
{
	CleartBit(SREG_Register, I_Bit);
}
