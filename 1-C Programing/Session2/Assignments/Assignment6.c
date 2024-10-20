#include <stdio.h>

void main()
{

	int num  ,flag= 0;
	printf("Enter a number: ");
	scanf("%d",&num);

	if(num == 1)
	{
		printf("%d is not a prime number",num);
	}
	else
	{
		for(int i = 2 ;i <num;i++)
		{
			if(num % i == 0)
              {
              	flag = 1;
              	break;
              } 
		}


	   if(flag)
		{
			printf("%d is not a prime number",num);
		}
	    else
		{
			printf("%d is a prime number",num);
		}
	}
}