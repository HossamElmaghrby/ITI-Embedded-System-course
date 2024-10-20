#include <stdio.h>

void main()
{
   int arr[] = {1,2,3,4,5,6,7};
   int *ptr = arr ;
   for(int i =0 ; i<7;i++)
   {
   	printf("0x%x 0x%x\n",&arr[i] ,ptr+i);
   }
}