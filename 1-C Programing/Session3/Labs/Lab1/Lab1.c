#include <stdio.h>

int isPrime(int n);


int  main()
{
	int num ;
	printf("Enter a number to check is prime: ");
	scanf("%d",&num);

	if(isPrime(num))
	{
		printf("%d is a prime\n",num);
	}
	else 
	{
		printf("%d is not a prime\n",num);
	}
	return 0;
}


int isPrime(int n)
{
   if(n==1)
   {
   	return 0 ;
   }
	else
	{
		for(int i =2 ;i<n/2;i++)
		{
			if(n % i==0)
				return 0;
		}
	}

	return 1;
}