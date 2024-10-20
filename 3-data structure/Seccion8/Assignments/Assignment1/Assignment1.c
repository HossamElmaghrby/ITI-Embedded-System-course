
#include "linked_list.h"



int main(int argc, char const *argv[])
{
	int choice =-1  ,element = 0 , res = 0;
    
    while(choice != 6)
    {
    printf("\n----------------------\n");	
    printf("1-add to linked list\n2-print linked list\n3-Search in linked list\n4-delete element\n5-Update Value\n6-Exit\n");
    printf("------------------\n");
    printf("Enter choice:");
    fflush(stdin);
	scanf("%d",&choice);

	switch(choice)
	{
	case 1:
		printf("Enter the element:");
		scanf("%d",&element);
        insertIntoList(element);
        break ;
    case 2:
    	   if(Is_empty() != 1)
         {
            printList();
         }
      break ;
    case 3:
    	if(Is_empty() != 1)
    		{
        printf("Enter the element to search:");
        scanf("%d",&element);
        res =getIndex(element);
        printf("\n-------------------\n");
        if(res == -1)
          printf("this elemnt not exit\n");
        else
          printf("the index of %d is %d\n",element ,res);          
        }
    	break;
    case 4:
      if(Is_empty() != 1)
      {
        printf("\n-----------------------\n");
        printf("Enter the element to remove:");
        scanf("%d",&element);
        if(deleteFromList(element)== ERROR )
        {
          printf("\n-------------------\n");
          printf("This element not exist\n");
        }
        else
        {
          printf("\n-------------------\n");
          printf("element is removed\n");
        }
      }
      break ;
    case 5:
      if(Is_empty() != 1)
      {
        printf("\n-----------------------\n");
        printf("Enter the element to Update :");
        scanf("%d",&element);

        printf("Enter new element: ");
        scanf("%d",&res);
        if(updateValue(element ,res )== ERROR )
        {
          printf("\n-------------------\n");
          printf("This element not exist\n");
        }
        else
        {
          printf("\n-------------------\n");
          printf("element is updated\n");
        }
      }
      break ;
    case 6:
      break ;
    default :
    	printf("invalid choice\n");
	}
    }    
	return 0;
}


