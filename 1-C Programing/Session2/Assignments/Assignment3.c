#include <stdio.h>

int main()
{

	int num1,num2 ,num3,num4,num5 ,max;
	printf("Please Enter 5 number each separated by space : ");
	scanf("%d %d %d %d %d",&num1 ,&num2 ,&num3 ,&num4,&num5);

    if(num1 >num2)
    {
    	if(num1>num3)
    	{
    		if(num1>num4)
    		{
    			if(num1>num5)
    			{
    				max =num1 ;
    			}
    			else
    			{
    				max= num5 ;
    			}
    		}
    		else if(num4>num5)
    		{
    			max = num4 ;
    		}
    		else
    		{
    			max = num5;
    		}
    	}
    	else if(num3>num4)
    	{
    		if(num3>num5)
    		{
    			max =num3 ;
    		}
    		else
    		{
    			max = num5;
    		}
    	}
    	else if(num4>num5)
    	{
    		max = num4;
    	}
    	else
    	{
    		max = num5 ;
    	}
    }
    else if(num2>num3)
    {
    	if(num2>num4)
    	{
    		if(num2>num5)
    		{
    			max = num2;
    		}
    		else
    		{
    			max = num5;
    		}
    	}
    	else if(num4>num5)
    	{
            max =num4;
    	}
    	else
    	{
    		max=num5;
    	}
    }
    else if(num3>num4)
    {
    	if(num3>num5)
    	{
    		max= num3;
    	}
    	else
    	{
    		max =num5;
    	}
    }
    else if(num4>num5)
    {
    	max =num4;
    }
    else
    {
    	max =num5;
    }

    printf("max number is : %d",max);
	return 0;
}