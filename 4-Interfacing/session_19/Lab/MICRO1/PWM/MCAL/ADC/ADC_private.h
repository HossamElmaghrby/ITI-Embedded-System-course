/*
 * ADC_private.h
 *
 *  Created on: Aug 4, 2024
 *      Author: Elmag
 */

#ifndef MCAL_ADC_ADC_PRIVATE_H_
#define MCAL_ADC_ADC_PRIVATE_H_

/* Data Reg  */
#define ADMUX_Register		        *((vu8_t*)0x27)		//ADC high register
#define SFIOR_Register	        	*((vu8_t*)0x50)		//ADC Low register
#define ADCDATA_Register     		*((vu16_t*)0x24)		//ADC Low + High
#define ADCSRA_Register             *((vu8_t*)0x26)

/* ADMUX register bits */
#define MUX0    0
#define MUX1    1
#define MUX2    2
#define MUX3    3
#define MUX4    4
#define ADLAR   5
#define REFS0   6
#define REFS1   7

/* ADCSRA register bits */
#define ADPS0   0
#define ADPS1   1
#define ADPS2   2
#define ADIE    3
#define ADIF    4
#define ADATE   5
#define ADSC    6
#define ADEN    7

/* SFIOR register bits */
#define ADTS0   5
#define ADTS1   6
#define ADTS2   7

#endif /* MCAL_ADC_ADC_PRIVATE_H_ */
