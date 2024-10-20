#include <stdio.h>

void bubble_sort(int arr[] , int len);
void swap(int arr[] , int i ,int j);
void print_array(int arr[], int len);
void main()
{
    int arr[] = {6,1,3,5,4,2};

    int size =sizeof(arr)/sizeof(arr[0]);

    bubble_sort(arr ,size);

    printf("sorted array: ");
    print_array(arr,size);
}

void bubble_sort(int arr[], int len)
{
   int i , j ;

   for(i = 0 ; i<len- 1 ;i++)
   {
   	for(j = 0 ; j<len-i -1 ;j++)
   	{
       if(arr[j]>arr[j+1])
        swap(arr , j ,j+1);
   	}
   }


}

void swap(int arr[] , int i , int j)
{
	int temp =arr[i];
	arr[i] =arr[j];
	arr[j]= temp ;
}

void print_array(int arr[] , int len)
{
  int i ;
  for(i = 0;i<len ; i++)
  	printf("%d ",arr[i]);
  printf("\n");
}