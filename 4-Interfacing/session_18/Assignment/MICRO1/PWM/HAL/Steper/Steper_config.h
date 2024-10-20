/*
 * Steper_config.h
 *
 *  Created on: Jul 31, 2024
 *      Author: Elmag
 */

#ifndef HAL_STEPER_STEPER_CONFIG_H_
#define HAL_STEPER_STEPER_CONFIG_H_

struct coil
{
	u8_t port ;
	u8_t pin ;
};

struct coil coils[] =
{
		{PORTC , PIN0},
		{PORTC , PIN1},
		{PORTC , PIN2},
		{PORTC , PIN3}
};

#define NUM_OF_COILS   (sizeof(coils)/sizeof(coils[0]))
#endif /* HAL_STEPER_STEPER_CONFIG_H_ */
