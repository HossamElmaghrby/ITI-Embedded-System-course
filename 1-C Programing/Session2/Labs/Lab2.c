#include <stdio.h>

int co2level = 40 ;
void main()
{
	int chum= 80 , ctemp = 22 ;

	int thum = 50 , ttemp = 40;
    int co2level = 60 ;


	printf("Enter current hum and current temp :" );
	scanf("%d %d",&thum ,&ttemp);

	//printf("is the wether is good? %d",(chum >= thum)&&(ctemp >= ttemp));

    if(chum>thum)
    {
    	printf("The humidty is very high and value is %d \n", chum);
    	int uvindex = 4 ;

    }
    
    printf("The co2 level is : %d ", co2level);
}