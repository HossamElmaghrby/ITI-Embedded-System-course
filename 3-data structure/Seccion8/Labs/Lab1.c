#include <stdio.h>
#include <stdlib.h>
typedef struct Node_t
{
   int data ;
   struct Node_t * next ;
}Node;

void add_node(int data);
void print_linked_list();
int linked_list_search(int element);

Node * head = NULL ;
Node * tail = NULL ;
int main(int argc, char const *argv[])
{
	int choice =-1  ,element = 0 , res = 0;
    
    while(choice != 4)
    {
    printf("\n----------------------\n");	
    printf("1-add to linked list\n2-print linked list\n3-Search in linked list\n4-Exit\n------------------\n");
    printf("Enter choice:");
    fflush(stdin);
	scanf("%d",&choice);

	switch(choice)
	{
	case 1:
		printf("Enter the element:");
		scanf("%d",&element);
        add_node(element);
        break ;
    case 2:
    	print_linked_list();
      break ;
    case 3:
    	if(head == NULL)
    		printf("linked list is empty\n");
    	else
    	{
        printf("Enter the element to search:");
    	scanf("%d",&element);
    	res =linked_list_search(element);

        if(res == -1)
        	printf("this elemnt not exit\n");
        else
        	printf("the index of %d is %d\n",element ,res);
    	}
    	break;
    case 4:
      break ;
    default :
    	printf("invalid choice\n");
	}
    }    
	return 0;
}

void add_node(int data)
{
	Node *NewNode = (Node*) malloc(sizeof(Node));
	NewNode->data = data ;
	NewNode->next =NULL ;

	if(head == NULL)
	{
		head = NewNode  ;
		tail =NewNode ;
	}
   else
   {
     tail ->next  =NewNode ;
     tail = NewNode ;
     tail ->next =NULL ;
   }
}

void print_linked_list()
{
	Node * current = head ;
     
     if(head == NULL)
     {
     	printf("----------------------\n");
     	printf("linked list is empty\n");
     	printf("----------------------\n");
     }
	 else
	 {
	 	printf("----------------------\n");
	 	printf("linked list element:");
	 	do
	 	{	
          printf("%d ",current->data);
          current = current->next ;
	 	}while(current != NULL);

	 	printf("\n----------------------\n");
	 }
}

int linked_list_search(int element)
{
   Node * current = head ;
   int count = 0 ;

   while(current !=NULL)
   {
      if(current->data == element)
      {
          return count ;
      }
     count++ ;
     current = current->next ;
   }

   return -1 ;
}