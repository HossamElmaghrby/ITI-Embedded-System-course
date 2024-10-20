
#ifndef _CLINIC_SYSTEM_H_
#define _CLINIC_SYSTEM_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct patient
{
	char name[50] ;
	int age ;
	char gender ;
	int ID ;
	struct patient * next ;
	struct patient * prev ;
}t_patient;


typedef enum 
{
ERROR,
NO_ERROR
}ERROR_t;

ERROR_t Add_new_patient();
ERROR_t Edit_patient(int ID);
ERROR_t Reserve_slot();
ERROR_t Cancel_reservation(int ID);
ERROR_t print_patient(int ID);
ERROR_t print_reservations();
int Is_empty();
#endif