/*
 * ADC_config.h
 *
 *  Created on: Aug 4, 2024
 *      Author: Elmag
 */

#ifndef MCAL_ADC_ADC_CONFIG_H_
#define MCAL_ADC_ADC_CONFIG_H_

#define ADC_PSC_2      0b000
#define ADC_PSC_4      0b010
#define ADC_PSC_8      0b011
#define ADC_PSC_16     0b100
#define ADC_PSC_32     0b101
#define ADC_PSC_64     0b110
#define ADC_PSC_128    0b111

#define ADC_REF_AREF  0b00
#define ADC_REF_AVCC  0b01
#define ADC_REF_INT   0b11

#define ADC_ADJUST_RIGHT    0b0
#define ADC_ADJUST_LEFT     0b1


#define ADC_PSC     ADC_PSC_32
#define ADC_REF     ADC_REF_AVCC
#define ADC_ADJUST  ADC_ADJUST_RIGHT
#endif /* MCAL_ADC_ADC_CONFIG_H_ */
