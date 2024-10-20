#include <stdio.h>

void main()
{
    int num =0;
	printf("Enter a number to convert to binary :");
	scanf("%d",&num);

  for(int i = 7 ; i>=0 ;i--)
  {
  	printf("%d",(num>>i)&1);
  }
  printf("\n");
}