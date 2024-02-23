// singly linear  linked list:

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, PPNODE Last, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if((*First == NULL) && (*Last == NULL))    // Empty LL
    {
        *First = *Last = newn;
        (*Last)->next = *First;
    }
    else    // LL contains atleast one node
    {
        newn->next = *First;
        *First = newn;
        (*Last)->next = *First;
    }
}

void InsertLast(PPNODE First, PPNODE Last, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if((*First == NULL) && (*Last == NULL))    // Empty LL
    {
        *First = *Last = newn;
        (*Last)->next = *First;
    }
    else    // LL contains atleast one node
    {
        (*Last) -> next = newn;
        *Last = newn;
        (*Last)->next = *First;
    }
}

void Display(PNODE First, PNODE Last)
{
    printf("Elements of Linked list are : \n");

    do
    {
        printf("| %d |-> ",First->data);
        First = First -> next;
    }while(First != Last->next);
    printf("\n");
}

int Count(PNODE First, PNODE Last)
{
    int iCnt = 0;
    do
    {
        iCnt++;
        First = First -> next;
    }while(First != Last->next);
    return iCnt;
}

void DeleteFirst(PPNODE First , PPNODE Last)
{
     PNODE itemp = *First;
 if((*First==NULL)&&(*Last==NULL))        // LL Is empty
 {
   return ;

 }
 else if(*First==*Last)    // LL contains atleast one element
 {
    free(*First);
    *First=NULL;
    *Last=NULL;
 }
 else             // LL contains more than one elements  // using itemp 
 {
  *First =(*First)->next;
    free(itemp);
    (*Last)->next = *First;
                        
 } }


 void  DeleteLast(PPNODE First , PPNODE Last)
 {
    PNODE itemp = *First;
    if((*First==NULL)&&(*Last==NULL))     // LL is empty
 {
   return ;

 }
 else if(*First==*Last)    // LL contains one node
 {
    free(*First);
    *First=NULL;
    *Last=NULL;
 }
 else         // LL contains more than one node
 {       
    while(itemp->next!=(*Last))
    {
        itemp = itemp->next;

    }
    free(itemp->next);    // free(*Last);
    *Last = itemp;
    (*Last)->next = *First;
    
 }

 }

 void InsertAtPos(PPNODE  First, PPNODE Last ,int no, int ipos)
 {
    int iNodeCnt=0 , iCnt=0;

    iNodeCnt= Count(*First , *Last);
    PNODE newn=NULL;
    PNODE temp=*First;

  if((ipos<1)||(ipos>iNodeCnt+1))
  {
  printf("Invalid position\n");
  return;

  }
   if(ipos==1)
  {
    InsertFirst(First,Last,no);
  }

  else if(ipos==iNodeCnt+1)
  {
   InsertLast(First , Last , no);
  }
  else
  {
    newn = (PNODE)malloc(sizeof(NODE));
    newn->next=NULL;
    newn->data=no;

    for(iCnt=1; iCnt<ipos-1;iCnt++)
    {
        temp = temp->next;
    }
    newn->next = temp->next;
    temp->next = newn;
  }
 }


 void DeleteAtPos(PPNODE  First, PPNODE Last,int ipos)
 {
    int iNodeCnt=0, iCnt=0;

    iNodeCnt= Count(*First , *Last);
    PNODE temp1=NULL;
    PNODE temp2 = NULL;
  if((ipos<1)||(ipos>iNodeCnt))
  {
  printf("Invalid position\n");

  }
   if(ipos==1)
  {
    DeleteFirst(First,Last);
  }

  else if(ipos = iNodeCnt)
  {
   DeleteLast(First , Last);
  }
  else
  {
     for(iCnt=1; iCnt<ipos-1;iCnt++)
    {
        temp1 = temp1->next;
    }temp2= temp1->next;
    temp1->next = temp2->next;
    free(temp2);
  }

 }


int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL;
    int iRet = 0;
    
    InsertFirst(&Head, &Tail, 51);
    InsertFirst(&Head, &Tail, 21);
    InsertFirst(&Head, &Tail, 11);
    
    InsertLast(&Head, &Tail, 101);
    InsertLast(&Head, &Tail, 111);
    InsertLast(&Head, &Tail, 121);
    Display(Head, Tail);
    iRet = Count(Head, Tail);
    printf("Number of elements are : %d\n",iRet);


    InsertAtPos(&Head,&Tail,105,5);
    Display(Head, Tail);
    iRet = Count(Head, Tail);
    printf("Number of elements are : %d\n",iRet);

    DeleteAtPos(&Head,&Tail,5);
    Display(Head, Tail);
    iRet = Count(Head, Tail);
    printf("Number of elements are : %d\n",iRet);


    DeleteFirst(&Head , &Tail);
    Display(Head , Tail);
    iRet = Count(Head, Tail);
    printf("Number of elements are : %d\n",iRet);

    
    DeleteLast(&Head , &Tail);
    Display(Head , Tail);
    iRet = Count(Head, Tail);
    printf("Number of elements are : %d\n",iRet);


    



    return 0;
}