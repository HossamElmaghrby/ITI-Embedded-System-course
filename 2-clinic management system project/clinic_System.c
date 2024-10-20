#include "clinic_System.h"
#include <string.h>
t_patient * head = NULL ;
t_patient * tail = NULL ;

int IDs[100]={0};
int Res_slot[5]={0} ;
char slots [5][25] = {"1- 2pm to 2:30pm" ,"2- 2:30pm to 3pm" ,"3- 3pm to 3:30pm" ,"4- 4pm to 4:30pm", "5- 4:30pm to 5pm"};

ERROR_t Add_new_patient()
{
  char name[50];
  int age ;
  char gender ;
  int ID ;
  t_patient *NewNode = (t_patient*) malloc(sizeof(t_patient));
  printf("-------------------\n");
  printf("Enter name: ");
  scanf(" %s",name);
  printf("Enter age: ");
  scanf("%d",&age);
  printf("Enter gender 'M' or 'F': ");
  scanf(" %c",&gender);
  while(1)
  {
    printf("Enter ID(1 to 100): ");
    scanf("%d",&ID);

    if(ID >=1 && ID<=100)
    {
      break ;
    }
    printf("invalid ID\n");
  }

  if(IDs[ID] == 1)
  {
    return ERROR ;
    free(NewNode);
  }
  else
  {
    IDs[ID]=1 ;

   NewNode->next =NULL ;
  t_patient *current  =NULL;
  strcpy(NewNode->name , name) ;
  NewNode->age = age ;
  NewNode->gender = gender ;
  NewNode->ID = ID ;
  if(head == NULL)
  {
    head = NewNode  ;
    tail = NewNode ;
    NewNode->prev =NULL ;
  }
   else
   {
     tail ->next  = NewNode ;
     current = tail ;
     tail = NewNode ;
     tail->prev = current ;
   }
    return NO_ERROR ;
  }
}

ERROR_t Edit_patient(int ID)
{
    t_patient *current=head ;
     int i ;
    if(IDs[ID] == 1)
    {
      IDs[ID]=0 ;

      for(i = 0 ;i<5 ;i++)
      {
        if(Res_slot[i]== ID)
        {
          Res_slot[i]= 0 ;
          break ;
        }
      }

      if(current->ID == ID)
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
       else if(tail->ID == ID)
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
         if(current->ID ==  ID)
         {
           current->prev->next=current->next ;
           current->next->prev = current->prev ;
           free(current);
           return NO_ERROR ;
         }
         current = current->next;
        }
         
       }
    }
   return ERROR ;
}
ERROR_t Reserve_slot()
{
    int i,flage =0 ,slot_num = 0 ,ID =0;
    printf("------------------------\n");
    printf("Enter ID:");
    scanf("%d",&ID);

    if(IDs[ID] !=1)
    {
      return ERROR ;
    }
    
       for(i = 0 ;i<5 ;i++)
      {
        if(Res_slot[i]== ID)
        {
          printf("---------------------------\n");
          printf("This ID has already slot %s\n",slots[i]);
          return NO_ERROR;
        }
      }
  printf("---------------------------\n");
  for(i = 0 ;i<5 ;i++ )
  {
    if(Res_slot[i] == 0)
    {
      flage = 1 ;
      printf("%s\n",slots[i]);
    }
  }
  printf("6- Exsit\n");
  if(flage)
  {
    while(slot_num != 6)
    {
    printf("---------------------------\n");
    printf("Enter number from available slots:");
    scanf("%d",&slot_num);

    if((slot_num>=1 && slot_num <= 5)&& !(Res_slot[slot_num-1]))
    {
       Res_slot[slot_num-1] = ID ;
       printf("-------------------------\n");
       printf("Successfuly reserved\n");
       return NO_ERROR ;
    }
    else if(slot_num !=6)
    {
      printf("---------------------------\n");
      printf("invalid choice\n");
    }
    }
  }
  else
  {
    printf("---------------------------\n");
    printf("There is no available slots\n");
    return NO_ERROR ;
  }
  return NO_ERROR ;
}
ERROR_t Cancel_reservation(int ID)
{
  int i ;
  if(IDs[ID] == 1)
  {
      for(i = 0 ;i<5 ;i++)
      {
        if(Res_slot[i]== ID)
        {
           Res_slot[i] = 0 ;
           return NO_ERROR ;
        }
      }
      printf("---------------------------\n");
      printf("This ID not have slot\n");
      return ERROR ;
  }
  printf("---------------------------\n");
  printf("This ID not exsit\n");
  return ERROR ;
}

ERROR_t print_patient(int ID)
{
     t_patient * current = head ;
   int count = 0 ;

   while(current !=NULL)
   {
      if(current->ID == ID)
      {
          printf("---------------------------\n");
          printf("Name : %s\n",current->name);
          printf("age : %d\n",current->age);
          printf("gender : %c\n",current->gender);
          return NO_ERROR ;
      }
     current = current->next ;
   }

   return ERROR ;
}
ERROR_t print_reservations()
{
  int i ,flage =0;
  printf("--------------------------------\n");
  for(i=0 ;i<5;i++)
  {
    if(Res_slot[i]!=0)
    { 
      flage = 1 ; 
      printf("The ID :%d  reserve slot :%s\n",Res_slot[i] , slots[i]);
    }
  }

  if(flage)
    return NO_ERROR ;
  else
    return ERROR ;
}
int Is_empty()
{
  int status = 0;
  if(head == NULL)
    {
          printf("----------------------\n");
          printf("system  has no patient\n");
          printf("----------------------\n");

          status = 1 ;
    }
  else
    status = 0;

return status ; 
}