#include <stdio.h>
struct complex
{
  float real ;
  float imagn ;
};

struct complex add(struct complex num1,struct complex num2);
struct complex sub(struct complex num1,struct complex num2);

void print_struct(struct complex num ,char opp);
void main()
{
	struct complex num1 ;
	struct complex num2 ;
	struct complex res ;
   printf("Enter real  value of complex1 :");
   scanf("%f",&num1.real);
  
   printf("Enter imagn  value of complex1 :");
   scanf("%f",&num1.imagn);
  
  printf("****************************\n");
   struct complex num ;
   printf("Enter real  value of complex2 :");
   scanf("%f",&num2.real);
  
   printf("Enter imagn  value of complex2 :");
   scanf("%f",&num2.imagn);

   res = add(num1 , num2);
   print_struct(res , '+');

     res = sub(num1 , num2);
     print_struct(res , '-'); 

}

struct complex add(struct complex num1,struct complex num2)
{
	struct complex res ;
	res.real = num1.real+num2.real;
	res.imagn =num1.imagn + num2.imagn ;

	return res;
}
struct complex sub(struct complex num1,struct complex num2)
{
	struct complex res ;
	res.real = num1.real - num2.real;
	res.imagn =num1.imagn - num2.imagn ;

	return res ;
}

void print_struct(struct complex num , char opp)
{
	if(opp == '+')
	printf("res of add is %0.2f + %0.2f i \n" , num.real ,num.imagn); 
    else if(opp== '-')
    printf("res of sub is %0.2f + %0.2f i \n" , num.real ,num.imagn); 	
}