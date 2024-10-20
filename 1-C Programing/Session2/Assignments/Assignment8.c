#include <stdio.h>

void main()
{
	char opp = '0' ,flage =1;
	float num1 , num2 , result ;

	printf("Enter number1: ");
	//fflush(stdout); fflush(stdin);
	scanf("%f",&num1);

	printf("Enter number:2 ");
	fflush(stdout); fflush(stdin);
	scanf("%f",&num2);

	printf("Enter the opperation : ");
	//fflush(stdout); fflush(stdin);
	scanf(" %c",&opp);

    switch(opp)
	{
      case '+':
      	result = num1 + num2 ;
      	break;
      case '-':
      	result = num1 - num2 ;
      	break ;
      case '*':
      	result = num1 * num2 ;
      	break;
      case '/':
      	if(num2 == 0)
      	{
      		flage = 0;
      		printf("Error divied by Zero");
      	}
      	else
      	{
      		result = num1 /num2 ;
      	}
       break;
   default:
   	printf("Invalid opperation\n");
	}
	if(flage)
		printf("%.2f %c %.2f = %.2f",num1 , opp, num2 , result);

}