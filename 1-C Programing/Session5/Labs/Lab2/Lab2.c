#include <stdio.h>
float add(float a ,float b);
float sub(float a ,float b);
float mul(float a ,float b);
float dev(float a ,float b);
void main()
{
	float a ,b; 
	int opp;
	float (*F_ptr[])(float a,float b) = {add ,sub ,mul , dev};

   printf("Enter first num1:");\
   scanf("%f",&a);

   printf("Enter first num2:");\
   scanf("%f",&b);

   printf("1-add\n2-sub\n3-mul\n4-dev\nEter number of opperation: ");
   scanf("%d",&opp);
   
   if(opp>=1&&opp<=4) 
   printf("result is :%0.2f",F_ptr[opp-1](a , b));
   else
   {
   	printf("invalid opperation");
   }
}

float add(float a ,float b)
{
	return a+b ;
}
float sub(float a ,float b)
{
	return a-b;
}
float mul(float a ,float b)
{
	return a*b ;
}
float dev(float a ,float b)
{
	if(b == 0)
	{
		printf("can't divide by Zero\n");
		return -1;
	}
	return a/b;

}