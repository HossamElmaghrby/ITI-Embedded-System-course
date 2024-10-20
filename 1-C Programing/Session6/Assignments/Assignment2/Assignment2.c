#include <stdio.h>
#include <string.h>

struct Employee {
char name[50];
int id;
union {
float salary;
char department[50];
} info;
int type; // 0 for salary, 1 for department
};
// Function prototypes
void addEmployee(struct Employee employees[], int *count);
void displayEmployees(struct Employee employees[], int count);
void findEmployee(struct Employee employees[], int count, int id);
void updateSalary(struct Employee employees[], int count, int id, float mnewSalary);
void listByDepartment(struct Employee employees[], int count, const char *department);

void main()
{
	int index = 0 ,choice = 0 , id = 0;
	float salary ;
	char department[20] ; 
	struct Employee employees[50];

while(choice != 6)
{
	printf("\n----------------------------------\n");
	printf("1-add new Employee\n2-display Employees\n3-find Employee\n4-updat salary\n5-list by department\n6-exit\n");
	printf("Enter choice from 1 to 6: ");
	scanf("%d",&choice);
	printf("\n----------------------------------\n");
	switch(choice)
    {
     case 1:
     	addEmployee(employees ,&index);
     	break ;
     case 2:
     	if(index == 0)
     	{
     		printf("no employees to display\n");
     		continue ;
     	}
     	displayEmployees(employees , index);
     	break ;
     case 3:
     	if(index == 0)
     	{
     		printf("no employees to display\n");
     		continue ;
     	}
     	printf("Enter id of an employee: ");
     	scanf("%d",&id);
     	findEmployee(employees , index , id);
     	break ;
     case 4:
     	if(index == 0)
     	{
     		printf("no employees to display\n");
     		continue ;
     	}
     	printf("Enter id of an employee: ");
     	scanf("%d",&id);
     	printf("Enter new salary:");
     	scanf("%f",&salary);
     	updateSalary(employees , index ,id ,salary);
     	break ;
    case 5:
    	if(index == 0)
     	{
     		printf("no employees to display\n");
     		continue ;
     	}
        printf("Enter department:");
        scanf("%s",department);
        listByDepartment(employees , index ,department);

    case 6:
    	break ;
    default :
    	printf("Invalid choice\n");

    }
}
}

void addEmployee(struct Employee employees[], int *count)
{
	int type = -1 ;
   printf("Enter name :");
   scanf("%s",employees[*count].name);

   printf("Enter id :");
   scanf("%d",&employees[*count].id);

   printf("if want to enter salary enter 0 \nif want to enter department enter 1 \n");
    
   while(type !=0 && type !=1)
   {
   	printf("enter correct choice:");
    scanf("%d",&type);
   }
    employees[*count].type =type ;
   if(employees[*count].type == 0)
   {
   	printf("Enter salary :");
   	scanf("%f",&employees[*count].info.salary);
   }
   else
   {
   	printf("Enter department:");
   	scanf("%s",employees[*count].info.department);
   }

   (*count)++ ;

}
void displayEmployees(struct Employee employees[], int count)
{
  for(int i =0 ;i<count;i++)
  {
  	printf("\nEmployee :%d\n",i+1);
  	printf("\tname :%s\n",employees[i].name);
  	printf("\tid: %d\n",employees[i].id);
  	if(employees[i].type == 0)
  		printf("\tsalary : %0.3f\n",employees[i].info.salary);
  	else
  		printf("\tdepartment :%s\n",employees[i].info.department);
  }
}
void findEmployee(struct Employee employees[], int count, int id)
{
	int flage = 1;
   for(int i =0 ;i<count;i++)
  {
    if(employees[i].id == id)
    {
    flage = 0 ;	
    printf("\nEmployee :%d\n",i+1);
  	printf("\tname :%s\n",employees[i].name);
  	printf("\tid: %d\n",employees[i].id);
  	if(employees[i].type == 0)
  		printf("\tsalary : %0.3f\n",employees[i].info.salary);
  	else
  		printf("\tdepartment :%s\n",employees[i].info.department);
  	break ;
    }
  }

    if(flage )
  	printf("This id no exsit\n");
}
void updateSalary(struct Employee employees[], int count, int id, float newSalary)
{
	int flage = 1 ;
   for(int i =0 ;i<count;i++)
  {
    if(employees[i].id == id)
    {
    flage = 0 ;	
  	if(employees[i].type == 0)
  		employees[i].info.salary = newSalary ;
  	else
  		printf("this employee has an department only\n");
  	break ;
    }
  }
    if(flage )
  	printf("This id no exsit\n");
}
void listByDepartment(struct Employee employees[], int count, const char *department)
{
  for(int i =0 ;i<count;i++)
  {
  	if(!(strcmp(employees[i].info.department , department)))
  	{
    printf("\nEmployee :%d\n",i+1);
  	printf("\tname :%s\n",employees[i].name);
  	printf("\tid: %d\n",employees[i].id);
  	}
  }
}