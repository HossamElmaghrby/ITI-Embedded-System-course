#include <stdio.h>

void fun()
{
	static int x = 0;
    int y = 0 ;
	x++ ;
    y++ ;
   printf("x = %d , y = %d\n",x ,y );
}
 int main(int argc, char const *argv[])
{
    
    
    fun();
    fun();
    fun();
    fun();
    fun();
  
	return 0;
}