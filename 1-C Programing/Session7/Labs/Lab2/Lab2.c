#include <stdio.h>

#define fun_ptr(ptr) (++(*ptr)) 


void main()
{
	int x  ;
	int *p = &x;
    printf("Enter num :");
    scanf("%d",&x);
	printf("%d\n",fun_ptr(p) );
}