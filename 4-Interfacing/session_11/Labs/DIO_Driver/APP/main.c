/*
 * main.c
 *
 *  Created on: Jul 25, 2024
 *      Author: Elmag
 */

#include "../HAL/LED/LED_interface.h"
#include "../HAL/SEG/SEG_interfac.h"
#include "../HAL/SEG/SEG_config.h"
#include<util/delay.h>
int main()
{
	 SEG_voidInit(SEG1);
	 while(1)
	 {
    for(u8_t i =0 ;i<=9 ;i++)
    {
    	SEG_display(SEG1 , i);
    	_delay_ms(1000);
    }
	 }
	return 0 ;
}
