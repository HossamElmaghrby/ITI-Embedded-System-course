#include <stdio.h>

void main()
{
	int len ,width ;
    int area , prei;
	printf("Enter the length of the rectangle :");
	//fflush(stdin); fflush(stdout);
	scanf("%d",&len);
	printf("Enter the width of the rectangle :");
	//fflush(stdin); fflush(stdout);
	scanf("%d",&width);
  
    area = len*width ;
    prei=2*(len + width);
	printf("Area of the rectangle : %d\n prei of the rectangle : %d\n ",area , prei);

}