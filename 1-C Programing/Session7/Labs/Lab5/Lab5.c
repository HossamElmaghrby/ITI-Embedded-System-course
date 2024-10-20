#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int *ptr = (int *)malloc(4*sizeof(int));
    
    printf("befor realoc 0x%x\n",ptr );

    realloc(ptr ,8);
    
    printf("after realoc 0x%x\n",ptr );
	return 0;
}