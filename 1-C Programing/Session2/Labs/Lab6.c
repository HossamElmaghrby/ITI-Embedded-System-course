#include <stdio.h>

void main()
{
  int line = 0;

  printf("Please Enter number of lines : ");
  scanf("%d",&line);

  for(int row =0 ;row <line ;row++)
  {
  	for(int col =0 ;col<line ;col++)
  	{
  		printf(" "); 
  	}
  	printf("*");
  	printf("\n");
  }
}