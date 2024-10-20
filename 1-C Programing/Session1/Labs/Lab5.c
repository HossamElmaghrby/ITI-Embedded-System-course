#include <stdio.h>

void main()
{
	float EGP , USD ;
    
    printf("Enter amount in USD: ");
    scanf("%f",&USD);
    
    EGP = USD*100.0 ;
    printf("Amount in EGP:%f\n",EGP);
}