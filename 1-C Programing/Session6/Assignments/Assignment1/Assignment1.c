#include <stdio.h>
struct complex
{
  float real ;
  float imagn ;
};

struct complex add(struct complex num1,struct complex num2);
struct complex sub(struct complex num1,struct complex num2);
struct complex mull(struct complex num1,struct complex num2);
struct complex dev(struct complex num1,struct complex num2);

void print_struct(struct complex num );
void main()
{
	struct complex num1 ;
	struct complex num2 ;
	struct complex res ;
  char opp ;
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
  
   printf("\nEnter opperator: ");
   scanf(" %c",&opp);

  switch(opp)
  {
  case '+' :
    res =add(num1 ,num2);
    print_struct(res);
    break ;
  case '-' :
    res =sub(num1 ,num2);
    print_struct(res);
    break ; 
  case '*' :
    res =mull(num1 ,num2);
    print_struct(res);
    break;
  case '/':
    res =dev(num1 ,num2);
    print_struct(res);
    break;
  default :
    printf("Invalid opperator\n");
  }

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

struct complex mull(struct complex num1,struct complex num2)
{
  struct complex res ;

  res.real = num1.real * num2.real - num1.imagn * num2.imagn ;

  res.imagn = num1.real * num2.imagn + num1.imagn * num2.real ;

  return res ;
}
struct complex dev(struct complex num1,struct complex num2)
{
  struct complex res ;

  res.real = (num1.real * num2.real + num1.imagn * num2.imagn)/(num2.real *num2.real +num2.imagn*num2.imagn );

  res.imagn = (num1.imagn * num2.real - num1.real * num2.imagn)/(num2.real *num2.real +num2.imagn*num2.imagn );

  return res ;
}

void print_struct(struct complex num )
{
    printf("\nres of opperation is %0.2f + %0.2fi  \n" , num.real ,num.imagn);
	
}