#include <stdio.h>

/*void  search(int arr[],int element)
{
	  for(int i=0 ;i<8;i++)
    {
    	if(arr[i]==22)
    	{
    		printf("index of %d is %d",arr[i],i);

    		return ;
    	}
    }
    printf("This element is not valid");
}*/

int search(int arr[] ,int s , int e , int num)
{
     int mid = (s+e)/2 ;
	if(s==e)
		return -1 ;
    if(arr[mid] == num) return mid ;
	else if(arr[mid] > num) return search(arr , s ,mid-1 , num) ;
	else return search(arr , mid+1 ,e ,num );
	

}
void main()
{
	int arr[8] ,i,num ,index;

    for(i = 0 ;i<8 ;i++)
    {
    	printf("please enter number %d:",i );
    	scanf("%d",&arr[i]);
    }
    
    printf("Enter number want to search: ");
    scanf("%d",&num);

    index =search(arr , 0 ,sizeof(arr)-1, num);
    if(index==-1)
    {
    	printf("number not exist");
    }
    else
    {
    	printf("index is %d",index);
    }

}