/*
 * TIM1_private.h
 *
 *  Created on: Aug 5, 2024
 *      Author: Elmag
 */

#ifndef MCAL_TIM1_TIM1_PRIVATE_H_
#define MCAL_TIM1_TIM1_PRIVATE_H_

#define TCCR1A_Register    *((u8_t *)0x4F)
#define TCCR1B_Register    *((u8_t *)0x4E)
#define TCNT1_Register     *((u16_t *)0x4C)
#define OCR1A_Register     *((u16_t *)0x4A)
#define OCR1B_Register     *((u16_t *)0x48)
#define ICR1_Register      *((u16_t *)0x46)
#define TIMSK_Register     *((u8_t *)0x59)
#define TIFR_Register      *((u8_t *)0x58)
#define SFIOR_Register 	   *((u8_t *) 0x50)

/* TCCR1A register bits */
#define COM1A1  7
#define COM1A0  6
#define COM1B1  5
#define COM1B0  4
#define FOC1A   3
#define FOC1B   2
#define WGM11   1
#define WGM10   0

/* TCCR1B register bits */
#define ICNC1   7
#define ICES1   6
/* bit 5 reserved */
#define WGM13   4
#define WGM12   3
#define CS12    2
#define CS11    1
#define CS10    0

/* TIMSK register bits */
#define OCIE2   7
#define TOIE2   6
#define TICIE1  5
#define OCIE1A  4
#define OCIE1B  3
#define TOIE1   2
#define OCIE0   1
#define TOIE0   0

/* TIFR register bits */
#define OCF2    7
#define TOV2    6
#define ICF1    5
#define OCF1A   4
#define OCF1B   3
#define TOV1    2
#define OCF0    1
#define TOV0    0

/* SFIOR register bits */
#define ADTS2   7
#define ADTS1   6
#define ADTS0   5
/* bit 4 reserved */
#define ACME    3
#define PUD     2
#define PSR2    1
#define PSR10   0
#endif /* MCAL_TIM1_TIM1_PRIVATE_H_ */
