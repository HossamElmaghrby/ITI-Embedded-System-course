#include <stdio.h>

int main()
{
	int arr[10],i=0 ,num = 0;

	for(i = 0 ;i<10 ;i++ )
	{
		printf("Enter number %d : ",i+1 );
		scanf("%d",&arr[i]);
	}

	printf("please Enter number to search :");
	scanf("%d",&num);

	for(i = 0 ;i<10 ;i++)
	{
		if(arr[i]==num)
		{
			printf("The number you entered is at position :%d",i+1);
		}
	}
	return 0 ;
}