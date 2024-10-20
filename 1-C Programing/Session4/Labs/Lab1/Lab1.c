#include <stdio.h>
void Bubble_Sort(int arr[],int len);
void main()
{
	int arr[] = {56 ,82,11,49,325,18,263,41};
	int len = 8,i ;
    
    printf("array before sorting : ");

    for(i=0 ;i<len;i++)
    {
    	printf("%d ",arr[i]);
    }
    
    Bubble_Sort(arr , len);
    printf("\narray after sorting :  ");

    for(i=0 ;i<len;i++)
    {
    	printf("%d ",arr[i]);
    }
}

void Bubble_Sort(int arr[],int len)
{
	int i ,j ;
	for(i = 0 ;i<len-1;i++)
	{
		for(j=0;j<len-1-i ;j++)
		{
			if(arr[j] >arr[j+1])
			{
				arr[j]+=arr[j+1];
				arr[j+1]=arr[j]-arr[j+1];
				arr[j]=arr[j]-arr[j+1];
			}
		}
	}
}
