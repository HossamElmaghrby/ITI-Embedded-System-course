/*
 * main.c
 *
 *  Created on: Jul 25, 2024
 *      Author: Elmag
 */

#include "../HAL/LED/LED_interface.h"
#include "../HAL/SEG/SEG_interfac.h"
#include "../HAL/SEG/SEG_config.h"
#include "../HAL/Button/Button_config.h"
#include "../HAL/Button/Button_interface.h"
#include "../HAL/Button/Button_private.h"

#include<util/delay.h>
int main()
{
	 SEG_voidInit(SEG1);
	 Button_Init(BUTTON1);
	 u8_t i = 0 ;
	 SEG_display(SEG1 , i);
	 while(1)
	 {
       Button_voidWaitForButton(BUTTON1);
       i++ ;
       if(i>9)
    	   i = 0 ;
       SEG_display(SEG1 ,i);


	 }
	return 0 ;
}
