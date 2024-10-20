/*
 * TIM0_private.h
 *
 *  Created on: Aug 1, 2024
 *      Author: Mohammed Mansour
 */

#ifndef MCAL_TIM2_TIM2_PRIVATE_H_
#define MCAL_TIM2_TIM2_PRIVATE_H_


#define TCCR2_Register	 	*((u8_t *) 0x45)
#define TCNT2_Register	 	*((u8_t *) 0x44)
#define OCR2_Register	 	*((u8_t *) 0x43)
#define TIMSK_Register	 	*((u8_t *) 0x59)
#define TIFR_Register	 	*((u8_t *) 0x58)


/* TCCR2 register bits */
#define FOC2    7
#define WGM20   6
#define COM21   5
#define COM20   4
#define WGM21   3
#define CS22    2
#define CS21    1
#define CS20    0

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

void __vector_4(void) __attribute__((signal));


#endif /* MCAL_TIM2_TIM2_PRIVATE_H_ */
