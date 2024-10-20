#include <stdio.h>

void main()
{
	char str[20], i,flage = 0,size =0;

	printf("Enter a string to check is Palindrom: ");
	scanf("%s",str);
    
    while(str[size] !='\0')
    {
        size++ ;
    }
	for(i = 0 ;i<size/2; i++)
	{
		if(str[i]!=str[size-i-1])
		{
			flage =  1;
			break ;
		}
	}

	if(flage)
	{
		printf("string is not palindrom");
	}
	else 
	printf("string is palindrom");
}