#include <stdio.h>

void main()
{
	int x = 0 , y = 0;

	printf("Enter values x, y: ");
	scanf("%d %d",&x ,&y);

	printf("is %d > %d -->%d\n",x , y, x > y);
	printf("is %d < %d %d\n",x , y,x < y);
	printf("is %d >= %d %d\n",x , y,x > y);
	printf("is %d <= %d %d\n",x , y,x > y);
	printf("is %d == %d %d\n",x , y, x > y);
}