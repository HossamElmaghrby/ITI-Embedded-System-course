#include <stdio.h>

int factorial(int n);
void main()
{
   int num ;

   printf("Enter a number to get factorial: ");
   scanf("%d",&num);
    
   printf("factorial is :%d",factorial(num));
}

int factorial(int n)
{

	if(n==1)
		return 1;
	else
	{
		return n*factorial(n-1);
	}
}