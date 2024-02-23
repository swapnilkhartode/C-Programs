#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)

struct node
{
  int data;
  struct node *next;

};
typedef struct node  NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE; 

void InsertFirst(PPNODE First ,int No)
{
    // step 1: Allocate the memory for new node
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    //step 2 : Initialise the node
    newn->data = No;
    newn->next = NULL;

    //step 3 : check linked list is empty or not
    if(*First==NULL)
    {
        *First = newn;
    }

    else         // if linked list contains at list one node
    {
        newn->next = *First;
        *First = newn;
    }
    
}

void Display(PNODE First)
{
    printf("Elements of linked list are:\n");
    while(First !=NULL)
    {
        printf("%d\t",First->data);
        First = First->next;
    }
    printf("NULL\n");
}
int main()
{
 PNODE Head =NULL;

 InsertFirst(&Head,51);
 InsertFirst(&Head,21);
 InsertFirst(&Head,11);

 
 Display(Head);


    return 0;
}


/*

 void InsertFirst(PPNODE First,int No)
 void InsertLast(PPNODE First ,int No)
 void InsertAtPOs(PPNODE First,int No,int Pos)
                                  
 void DeleteFirst(PPNODE First)
 void DeleteLast(PPNODE First)
 void DeleteAtPos(PPNODE First,int Pos)

 void Display(PNODE First)
 int Count(PNODE First)

*/
/////////////////////////////////////////////////////////
/*
 InsertFirst(&Head,11)
 InsertLast(&Head,11)
 InsertAtPos(&Head,11,5)

 DeleteFirst(&Head)
 DeleteLast(&Head)
 DeleteAtPos(&Head,5)

 Display(Head)
 Count(Head)

*/

/*

 topics to read from c programming for data structure

 premitive data types
 size of all data types
 loops (while & for)
 Dynamic memory (malloc & calloc)
 pointer to pointer
 pointer and its type
 call by value and call by address
 structure declaration
 self referential structure
 memory allocation of structure
 Direct and indirect accessing of structure
 typedef and its use





*/