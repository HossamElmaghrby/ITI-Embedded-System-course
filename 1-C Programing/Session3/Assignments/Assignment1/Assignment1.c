#include <stdio.h>


int main(int argc, char const *argv[])
{
	char str[50] ,size = 0 ,i ,index =0  ;
	int freq[10] = {};
    
    scanf("%s",str);

    while(str[size] != '\0')
    size++ ;

    for(i =0 ;i<size ; i++)
    {
    	if(str[i]>= '0' && str[i]<='9')
          {
          	index=str[i]-48 ;
          	freq[index]++ ;

          }
    }

    for(i = 0 ;i<=9 ;i++)
    {
    	printf("%d ",freq[i]);
    }
	return 0;
}