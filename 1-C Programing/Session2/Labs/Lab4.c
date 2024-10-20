#include <stdio.h>

void main()
{
	int UV_Level = 0 ;
	printf("Please Enter UV Levell today: ");
	scanf("%d",&UV_Level);

	switch(UV_Level)
	{
	case 1:
		printf("UV Level is Low(green)\n");
		break;
	case 2:
		printf("UV Level is Modrate(yellow)\n");
		break;
	case 3:
		printf("UV Level is High(orange)\n");
		break;
	default:
		printf("UV Level is Very High(red)\n");
	}
}