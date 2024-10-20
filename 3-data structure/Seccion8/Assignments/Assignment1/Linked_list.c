
#include "linked_list.h"

Node * head = NULL ;
Node * tail = NULL ;

void insertIntoList(int value)
{
  	Node *NewNode = (Node*) malloc(sizeof(Node));
	NewNode->data = value ;
	NewNode->next =NULL ;
    Node *current  =NULL;
	if(head == NULL)
	{
		head = NewNode  ;
		tail =NewNode ;
		NewNode->prev =NULL ;
	}
   else
   {
     tail ->next  = NewNode ;
     current = tail ;
     tail = NewNode ;
     tail->prev = current ;
   }
}
ERROR_t deleteFromList(int value)
{
	Node *current=head ;
   if(current->data == value)
   {
     if(head == tail)
      {
      	head =NULL ;
      	tail =NULL ;
      } 
      else
      {
         head = head->next ;
         head->prev =NULL ;
      } 
      free(current);
      return NO_ERROR ;
   }
   else if(tail->data == value)
   {
   	   current =tail ;
       tail=tail->prev ;
       tail->next =NULL;
       free(current);
       return NO_ERROR ;
   }
   else
   {
   while(current)
   {
   	 if(current->data ==  value)
   	 {
       current->prev->next=current->next ;
       current->next->prev = current->prev ;
       free(current);
       return NO_ERROR ;
   	 }
   	 current = current->next;
    }
     
   }

   return ERROR ;
}
int getIndex(int value)
{
     Node * current = head ;
   int count = 0 ;

   while(current !=NULL)
   {
      if(current->data == value)
      {
          return count ;
      }
     count++ ;
     current = current->next ;
   }

   return -1 ;
}
ERROR_t updateValue(int old, int new)
{
   Node * current = head ;
   int count = 0 ;

   while(current !=NULL)
   {
      if(current->data == old)
      {
          current->data = new ;
          return NO_ERROR ;
      }
     count++ ;
     current = current->next ;
   }

   return ERROR ;
}
int printList()
{	Node * current = head ;
     

     if(head == NULL)
     {
         return -1 ;
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
	 	return 1 ;
	 }

}

int Is_empty()
{
	int status = 0;
	if(head == NULL)
		{
	      printf("----------------------\n");
          printf("linked list is empty\n");
          printf("----------------------\n");

          status = 1 ;
		}
	else
		status = 0;

return status ;	
}