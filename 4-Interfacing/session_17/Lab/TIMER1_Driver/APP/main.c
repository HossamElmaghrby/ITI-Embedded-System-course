/*
 * main.c
 *
 *  Created on: Jul 25, 2024
 *      Author: Elmag
 */

#include  "../LIB/STD_Types.h"

#include "../HAL/LM35/LM35_interface.h"

#include "../MCAL/TIM1/TIM1_interface.h"

#include "../HAL/LCD/LCD_interface.h"

#include "../MCAL/DIO/DIO_interface.h"

#include "../HAL/Servo/Servo_interface.h"

#include <util/delay.h>




int main()
{
  Servo_Init();
  Servo_SetAngle(45);
  while(1)
  {

  }

  return 0 ;
}
