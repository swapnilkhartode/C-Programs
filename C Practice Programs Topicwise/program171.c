//Singly linked list mainpulation

#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)

struct node
{
  int data;
  struct node *next;
  
};
    typedef struct node NODE;
    typedef struct node *PNODE;
    typedef struct node **PPNODE;

    void InsertFirst(PPNODE First, int no)
    {
        PNODE newn  = (PNODE )malloc(sizeof(NODE)); //Step  : Allocate memory

        newn->data = no;
        newn->next = NULL;

        if(*First==NULL) //if linked list is empty
        {
            *First = newn;

        }

        else   //if linked list contains atleast one node
        {
            newn->next = *First;

            *First = newn;
        }
        



    }
   
   void InsertLast(PPNODE First, int no)
    {
        PNODE newn  = (PNODE )malloc(sizeof(NODE)); //Step  : Allocate memory
        
        newn->data = no;
        newn->next = NULL;
        if(*First==NULL) //if linked list is empty
        {
            *First = newn;

        }

        else   //if linked list contains atleast one node
        {
            
        }
        


    }
    void Display(PNODE First)
    {
        printf("Elements from the linked list are :\n");
        while(First!=NULL)
        {
            printf("| %d |->",First->data);
            First = First->next;
        }
        printf("NULL\n");
    }



int main()
{ 
    //struct node *Head = NULL;
 PNODE Head =NULL;

 InsertFirst(&Head,51);
 InsertFirst(&Head,21);
 InsertFirst(&Head,11);

 Display(Head);

    return 0;
}
/*
call by addresss
 
InsertFirst()
INsertLast()
InsertAtPosition()

DeleteFirst()
DeleteLast()
DeleteAtPosition()

Display()
Count()



*/