#include <stdio.h>

void swap (int *x, int *y);
void main()
{
     int x = 0 , y = 0 ;

     printf("Please Enter x:");
     scanf("%d",&x);

     printf("Please Enter y:");
     scanf("%d",&y);
     
     printf("Before swap x = %d ,y = %d\n",x,y);
     swap(&x , &y);

     printf("After swap x = %d ,y = %d",x,y);
}

void swap (int *x, int *y)
{
	int tepm= *x ;
      *x = *y ;
      *y = tepm ;
}