#include <stdio.h>

#define div(x , y)  x/y
#define mull(x ,y)  x*y
void main()
{
	float a ,b ;
   printf("Enter num1 :");
   scanf("%f",&a);

   printf("Enter num2 :");
   scanf("%f",&b);

   printf("%0.2f / %0.2f = %0.2f\n", a ,b ,div(a ,b));
   printf("%0.2f * %0.2f = %0.2f", a ,b ,mull(a ,b));
}