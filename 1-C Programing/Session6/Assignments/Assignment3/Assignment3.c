#include <stdio.h>


typedef long int uint32_t;
uint32_t a = 0;
uint32_t b = 0;
uint32_t c = 0;
typedef struct{
uint32_t x;
uint32_t y;
uint32_t z;
} MyStruct;
int main()
{
MyStruct * ptr = &a;
/* Use Arrow operator to access x, y and z elements */
ptr->x =5 ;
ptr->y =6;
ptr->z =7;
printf("a = %d\n", a);
printf("b = %d\n", b);
printf("c = %d\n", c);
}