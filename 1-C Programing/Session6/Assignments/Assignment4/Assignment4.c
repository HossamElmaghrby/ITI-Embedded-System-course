#include <stdio.h>
#include <math.h>
typedef struct 
{
	int side1 ;
	int side2 ;
	int side3 ;

	double area ;

}rectangle;

void sort_rectangle(rectangle rectangles[],int size);
void printf_rectangles(rectangle rectangles[],int size);


int main(int argc, char const *argv[])
{
	int size ,i ;
	float p ;
	rectangle rectangles[100] ;

	scanf("%d",&size);

	for(i = 0 ;i<size ;i++)
	{
		scanf("%d %d %d",&rectangles[i].side1,&rectangles[i].side2,&rectangles[i].side3);
        
        p =(rectangles[i].side1 + rectangles[i].side2 +rectangles[i].side3)/2.0	;
        
        rectangles[i].area = sqrt((p*(p-rectangles[i].side1)*(p -rectangles[i].side2)*(p - rectangles[i].side3)));
    }
   
   sort_rectangle(rectangles ,size);
   printf("------------------\n");
   printf_rectangles(rectangles ,size);
	return 0;
}

void sort_rectangle(rectangle rectangles[],int size)
{
	int i ,j ;
	rectangle temp ;
	for(i = 0 ;i<size-1;i++)
	{
		for(j=0;j<size-1-i ;j++)
		{
			if(rectangles[j].area >rectangles[j+1].area)
			{
				temp = rectangles[j];
				rectangles[j] = rectangles[j+1] ;
				rectangles[j+1]= temp;
			}
		}
	}
}

void printf_rectangles(rectangle rectangles[],int size)
{
	for(int i = 0 ;i<size ;i++)
	{
		printf("%d %d %d\n",rectangles[i].side1 ,rectangles[i].side2 ,rectangles[i].side3 );
	}
}