#include <stdio.h>

void Fibonacci (int n);
void main()
{
   int num ;

   printf("Enter the number of terms: ");
   scanf("%d",&num);

   Fibonacci(num);

}

void Fibonacci(int n)
{
	int t1 = 0 ,t2 =1,r ;
    int nextTerm =t1+t2 ;
    printf("%d %d ",t1,t2);
	for(r = 0 ;r<n-2;r++)
	{
		printf("%d ",nextTerm);
		t1 =t2 ;
		t2 = nextTerm ;
		nextTerm = t1 +t2 ;
	}
}