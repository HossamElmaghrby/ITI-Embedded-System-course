#include <stdio.h>

int main()
{
	int digits , res =0;
    printf("Enter a digits:");
    scanf("%d",&digits);

    while(digits % 10)
    {
    	res+=digits%10 ;
    	res*=10;
    	digits/=10 ;
    }
    res/=10;
    printf("reverse of number  = %d",res);
	return 0;
}