
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
   
   void InsertLast(PPNODE First, int no)
    {
        PNODE newn  = (PNODE )malloc(sizeof(NODE)); //Step  : Allocate memory
        PNODE temp = *First;

        newn->data = no;
        newn->next = NULL;

        if(*First==NULL) //if linked list is empty
        {
            *First = newn;

        }

        else   //if linked list contains atleast one node
        {
           while(temp->next!=NULL)
           {
            temp = temp ->next;

           }
           temp -> next = newn;
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
    int Count(PNODE First)
    {
        int iCnt =0;
        while(First!=NULL)
        {
            iCnt++;
            First = First->next;
            
        }
        return iCnt;
    }



int main()
{ 
    //struct node *Head = NULL;
 PNODE Head =NULL;

 InsertFirst(&Head,51);
 InsertFirst(&Head,21);
 InsertFirst(&Head,11);

 Display(Head);

 int iRet = Count(Head);
 printf("Number of nodes are :%d\n",iRet);

 InsertLast(&Head ,101);
 InsertLast(&Head , 111);
 
 Display(Head);

 iRet = Count(Head);
 printf("Number of nodes are :%d\n",iRet);


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