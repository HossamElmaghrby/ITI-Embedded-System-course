#include <stdio.h>

const int z = 7 ;
void main()
{
	 int x = 5 ;
     int y = 10 ;

	int  *const ptr1 = &x ;
	printf("the address inside pointer is 0x %x  \n",ptr1 );
	printf("the value of derefrenced pointer is  %d \n",*ptr1 );
    *ptr1 = 10 ;
    
    printf("the address inside pointer is 0x %x  \n",ptr1 );
	printf("the value of derefrenced pointer is  %d \n",*ptr1 );
    



}