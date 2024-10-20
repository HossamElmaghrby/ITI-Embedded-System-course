#include <stdio.h>
typedef unsigned char  u8 ;
typedef signed char  s8 ;

typedef unsigned short int  u16 ;
typedef signed short int  s16 ;

typedef unsigned long int  u32 ;
typedef signed long int  s32 ;

typedef  float  f32 ;

typedef long double  s128;

void main()
{
	printf("size of unsigned char :%d\n",sizeof(u8) );

	printf("size of signed char:%d\n",sizeof(s8) );

	printf("size of unsigned short int : %d\n",sizeof(u16) );

	printf("size of signed short int:%d\n",sizeof(s16) );

	printf("size of unsigned long int:%d\n",sizeof(u32) );

	printf("size of signed long int:%d\n",sizeof(s32) );

	printf("size of float:%d\n",sizeof(f32) );

	printf("size of long double:%d\n",sizeof(s128) );
}