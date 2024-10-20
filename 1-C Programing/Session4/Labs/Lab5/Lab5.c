#include <stdio.h>

void fun( void * a ,int size);
int main()
{

   int val = 0 ;

   fun((void*)&val ,4);

   char *cptr = (char*)&val ;

   printf("%c\n",*(cptr+1) );
	return 0 ;
}

void fun(void * a ,int size)
{
  *((char*)a+0)= 'a' ;
  *((char*)a+1)= 'b' ;
  *((char*)a+2)= 'c' ;
  *((char*)a+3)= 'd' ;

}