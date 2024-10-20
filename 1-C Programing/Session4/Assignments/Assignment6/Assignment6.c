#include <stdio.h>

void main(){

	int x,y,z ;
	int  *p ,*q,*r ;
    int temp1;

	printf("Enter value of x:");
	scanf("%d",&x);

    printf("Enter value of y:");
	scanf("%d",&y);

	printf("Enter value of z:");
	scanf("%d",&z);

	p = &x ;
	q = &y ;
	r = &z ;

	printf("x = %d , y = %d ,z = %d\n*p = %d ,*q= %d ,*r= %d\n",x,y,z,*p,*q,*r);

	printf("Swapping pionters\n");	

	temp1 = *r ;

	*r = *p ;
	*p = *q ;
	*q =temp1 ;

	printf("x = %d , y = %d ,z = %d\n*p = %d ,*q= %d ,*r= %d\n",x,y,z,*p,*q,*r);

}