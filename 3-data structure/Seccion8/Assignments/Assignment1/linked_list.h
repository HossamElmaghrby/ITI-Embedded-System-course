#ifndef _LINKED_LIST_H
#define _LINKED_LIST_H
#include <stdio.h>
#include <stdlib.h>

typedef struct Node_t
{
   int data ;
   struct Node_t * next ;
   struct Node_t * prev ;
}Node;

typedef enum 
{
ERROR,
NO_ERROR
}ERROR_t;

void insertIntoList(int value);
ERROR_t deleteFromList(int value);
int getIndex(int value);
ERROR_t updateValue(int old, int new);
int printList();
int Is_empty();

#endif