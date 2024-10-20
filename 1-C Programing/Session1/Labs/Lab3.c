#include <stdio.h>

void main()
{
	int num1 , num2 , temp ;

	printf("please enter number 1:");
	fflush(stdin); fflush(stdout);
    scanf("%d",&num1);
	printf("please enter number 2:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num2);
    
    printf("Befor swap num1 = %d , num2 = %d \n" ,num1 ,num2);
	temp = num1 ;

	num1 =num2 ;

	num2 =temp ;

	printf("After swap num1 = %d , num2 = %d \n", num1 ,num2);
}