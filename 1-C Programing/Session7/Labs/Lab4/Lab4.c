#include <stdio.h>

#define enable 0

#if enable == 1
void feature()
{
	printf("feature is enabled.\n");
}
#endif

void main()
{
  printf("main function is runing.\n");

#if enable == 1
  feature();
#endif

}