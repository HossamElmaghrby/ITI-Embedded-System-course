#include <stdio.h>
int arr[] = {1,2,3};
void fun(int *arr2);
void main()
{
  int * ptr =arr ;

  ptr++;

  printf("%d\n",ptr[1] );
  fun(arr);
}

void fun(int arr2[])
{
	arr2++ ;

	printf("%d",*arr2);
}