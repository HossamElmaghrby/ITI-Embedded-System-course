#include <stdio.h>

int main()
{

	float pi = 3.14 , Area ,perimeter ,raduis;

	printf("Enter the raduis of Circle :");
	scanf("%f",&raduis);
    
    Area = pi*raduis*raduis ;
    perimeter =2*pi*raduis ;
	printf("Area of Circle is :%.2f\n",Area);
	printf("perimeter of Circle is :%.2f\n",perimeter);
	return 0 ;
}