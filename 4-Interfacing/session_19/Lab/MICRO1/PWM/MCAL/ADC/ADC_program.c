/*
 * ADC_program.c
 *
 *  Created on: Aug 4, 2024
 *      Author: Elmag
 */
#include "../../LIB/STD_Types.h"
#include "../../LIB/Bit_Math.h"
#include "ADC_interface.h"
#include "ADC_private.h"
#include "ADC_config.h"

void ADC_Init(void)
{
     ADMUX_Register = 0 ;
     ADCSRA_Register = 0 ;

	SetBit(ADCSRA_Register , ADEN);

	//set prescaler
	ADCSRA_Register |=ADC_PSC <<ADPS0;

	//set reference
	ADMUX_Register |= ADC_REF  <<REFS0 ;

	//set result adjust

	ADMUX_Register |= ADC_ADJUST <<ADLAR ;
}

void ADC_Selectchannel(u8_t channel)
{
    ADMUX_Register &=0b11100000 ;
	ADMUX_Register |= channel <<MUX0 ;
}

u16_t ADC_StartConversion(void)
{
	//start conversion
	SetBit(ADCSRA_Register ,ADSC);

	//wait for conversion to complete
	while(GetBit(ADCSRA_Register , ADSC));

	return ADCDATA_Register ;
}
