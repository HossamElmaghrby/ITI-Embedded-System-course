#include "clinic_System.h"

#define password 1234
#define trying_num  3
int main(int argc, char const *argv[])
{
	int choice =0 , input_pass = 0 ,count =3;
	int exit = 0 ,ID=0;
	while(exit !=-1)
	{
    choice = 0 ;
	  while(choice !=1 && choice !=2 && choice !=3 )
	  {
        printf("------------------\n");
        printf("1-Admin mode\n2-User mode\n3-exit\nEnter choice:");
        scanf("%d",&choice);
        if(choice !=1 && choice !=2 && choice !=3)
        {
          printf("------------------\n");	
          printf("invalid choice\n");
          printf("------------------\n");
        }

        if(choice == 3)
          exit = -1 ;
	  }

	  if(choice == 1)
	  {
        choice = 0 ;
        while(count && choice != 5)
        {
          printf("------------------\n"); 
        	printf("please Enter password:");
        	scanf("%d",&input_pass);
           if(input_pass == password)
           {
             count=3 ;
             while(choice != 5)
             {
                printf("------------------\n"); 
                printf("1. Add new patient record\n2. Edit patient record\n3. Reserve a slot with the doctor\n4. Cancel reservation\n5.exit\nEnter choice:");
                scanf("%d",&choice);
                
                switch(choice)
                {
                case 1:
                        if(Add_new_patient() == ERROR)
                       {
                        printf("------------------\n"); 
                        printf("This ID already exist\n");
                       }
                       else
                       {
                         printf("------------------\n"); 
                         printf("successfully entered\n");
                       }
                  break ;

                case 2:
                     if(Is_empty() !=1)
                     {
                        printf("------------------\n"); 
                        printf("Enter ID to edit: ");
                        scanf("%d",&ID);
                        if(Edit_patient(ID) == ERROR)
                       {
                        printf("------------------\n"); 
                        printf("This ID not exist\n");
                       }
                       else
                       {
                         printf("------------------\n"); 
                         printf("successfully edit\n");
                       }
                     }
                  break ;

                 case 3:
                  if(Is_empty() !=1)
                  {
                    if(Reserve_slot()==ERROR)
                    {
                        printf("------------------\n"); 
                        printf("This ID not exist\n");
                    }
                  }
                 break ;

                 case 4:
                  if(Is_empty() !=1)
                  {
                        printf("------------------\n"); 
                        printf("Enter ID to cancel reservation: ");
                        scanf("%d",&ID);
                    if(Cancel_reservation(ID)== NO_ERROR)
                    {
                        printf("------------------\n"); 
                        printf("successfully cancelation\n");
                    }
                  }
                 break ;

                 case 5:
                 break ;

                 default :
                 printf("Invalid choice\n"); 
                }
              }
           }
           else
           {
           	count--;
            printf("incorrect password you have %d triers\n",count);
           }
        }

        if(count == 0)
        {
        	exit =-1 ;
        }
	  }
	  else if (choice == 2)
	  {
      choice = 0 ;
      while(choice != 3)
      {
        printf("---------------------------\n"); 
        printf("1.View patient record\n2.View today’s reservations\n3.exit\nEnter choice:");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
           if(Is_empty() != 1)
           {
            printf("------------------\n"); 
            printf("Enter ID : ");
            scanf("%d",&ID);

            if(print_patient(ID) == ERROR)
            {
              printf("------------------\n"); 
              printf("This ID not exist\n");
            }
           }
          break ;

        case 2:
          if(Is_empty() != 1)
          {
            if(print_reservations() == ERROR)
            {
              printf("------------------\n"); 
              printf("no reservations\n");
            }
          }
          break ;

        case 3:
          break ;
        default :
          printf("Invalid choice\n");
        }
      }
	  }
	}
	return 0;
}