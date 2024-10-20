#include <stdio.h>

int main()
{
	char ch = 0;
	printf("Enter a Character: ");
	scanf(" %c",&ch);

	switch(ch)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
		printf("%c is a vowel Character",ch);
		break;
	default:
		if(ch>='A' && ch<='z')
			printf("%c is not a vowel Character",ch);
		else
			printf("Sorry this is not alphabet letter");
	}

	return 0;
}