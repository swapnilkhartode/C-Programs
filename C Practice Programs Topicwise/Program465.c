
//insert last

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

   int SearchFirstOccurance(PNODE First , int No)
   {
     int Counter = 1;
     int iPos= -1;

     while(First != NULL)
     {
        if(First->data == No)
        {
            iPos = Counter;
            break;

        }
         First = First->next;
         Counter++;

     }
     return iPos;

   } 
   

    int SearchLastOccurance(PNODE First , int No)
   {
     int Counter = 1;
     int iPos= -1;

     while(First != NULL)
     {
        if(First->data == No)
        {
            iPos = Counter;
           
        }
         First = First->next;
         Counter++;

     }
     return iPos;

   } 
   

int main()
{ 
    //struct node *Head = NULL;
 PNODE Head =NULL;
 int Ret = 0;
 
  InsertFirst(&Head,151);
  InsertFirst(&Head,101);
 InsertFirst(&Head,121);
 InsertFirst(&Head,101);
 InsertFirst(&Head,51);
 InsertFirst(&Head,101);
 InsertFirst(&Head,21);
 InsertFirst(&Head,11);

 Display(Head);

 Ret = SearchFirstOccurance(Head , 101);
 if(Ret == -1)
 {
    printf("There is no such elements in LL\n");

 }

 else
 {
    printf("Element is there at index : %d\n",Ret);
 }
 

 Ret = SearchLastOccurance(Head , 101);
 if(Ret == -1)
 {
    printf("There is no such elements in LL\n");

 }

 else
 {
    printf("Element is there at index : %d\n",Ret);
 }
 


    return 0;
}
