#include <stdio.h>

#define SET_BIT(byte , bit)  (byte |=(1<<bit))
#define CLE_BIT(byte , bit)  (byte &=~(1<<bit))
#define TOGL_BIT(byte ,bit)  (byte ^=(1<<bit))
#define GET_BIT(byte ,bit)   ((byte>>bit)& 1)
void main()
{
   int byte  ,bit ,choice;

    printf("Enter byte :");
    scanf("%d",&byte);

    printf("Enter bit  :");
    scanf("%d",&bit);

    printf("1-set\n2-clear\n3-togle\n4-get\Enter choice:");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
    	printf("%d",SET_BIT(byte , bit));
    	break;
    case 2:
    	printf("%d",CLE_BIT(byte ,bit));
    	break;
    case 3:
    	printf("%d",TOGL_BIT(byte ,bit));
    	break;
    case 4:
    	printf("%d",GET_BIT(byte ,bit));
    	break;
    default:
    	printf("Invalid choice\n");
    }

}