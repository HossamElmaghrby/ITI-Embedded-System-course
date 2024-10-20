/*
 * ADC_interface.h
 *
 *  Created on: Aug 4, 2024
 *      Author: Elmag
 */

#ifndef MCAL_ADC_ADC_INTERFACE_H_
#define MCAL_ADC_ADC_INTERFACE_H_


#define ADC_CH_CH0 0b0000000
#define ADC_CH_CH1 0b0000001
#define ADC_CH_CH2 0b0000010
#define ADC_CH_CH3 0b0000011
#define ADC_CH_CH4 0b0000100
#define ADC_CH_CH5 0b0000101
#define ADC_CH_CH6 0b0000110
#define ADC_CH_CH7 0b0000111

void ADC_Init(void);
void ADC_Selectchannel(u8_t channel);
u16_t ADC_StartConversion(void);
#endif /* MCAL_ADC_ADC_INTERFACE_H_ */
