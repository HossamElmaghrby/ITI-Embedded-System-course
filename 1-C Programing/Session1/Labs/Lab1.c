#include <stdio.h>
void main()
{
	
	int num1=0 ,num2=0 ;
    int sum =0 ,mull =0;
	printf("please enter number 1: ");
	fflush(stdout);
    scanf("%d",&num1);
	printf("please enter number 2: ");
	fflush(stdout);
	scanf("%d",&num2);

   
    sum = num1 +num2 ;
    mull= num1 *num2 ;
    
	printf("num1 + num2 = %d \n",sum);
    printf("num1 * num2 = %d \n",mull);


}