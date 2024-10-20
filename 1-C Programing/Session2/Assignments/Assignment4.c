#include <stdio.h>
#include <math.h>
void main()
{
	double sides_num , side_len ,Area;

	printf("Enter the number of sides : ");
	scanf("%lf",&sides_num);

	printf("Enter the side length: ");
	scanf("%lf",&side_len);
   
   Area = (sides_num*(side_len*side_len)/4)*tan(M_PI/sides_num);
   
   printf("Area of this polygon is :%0.2lf" ,Area );
}