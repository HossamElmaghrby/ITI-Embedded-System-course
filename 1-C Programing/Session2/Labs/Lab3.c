#include <stdio.h>

void main()
{
	int UV_Level = 0 ;

	printf("Please Enter UV Levell today: ");
	scanf("%d",&UV_Level);

	if(UV_Level>=0 && UV_Level<=2)
	{
		printf("UV Level is Low(green)\n");
	}
	else if(UV_Level>=3 && UV_Level<=5)
	{
		printf("UV Level is Modrate(yellow)\n");
	}
	else if(UV_Level>=6 && UV_Level<=7)
	{
		printf("UV Level is High(orange)\n");
	}	
	else if(UV_Level>=8 && UV_Level<=10)
	{
		printf("UV Level is Very High(red)\n");
	}
}