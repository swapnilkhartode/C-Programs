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

void InsertFirst(PPNODE First,PPNODE Last,int No)
{
    // step 1 : Allocate the Memory for New Node
    PNODE newn=(PNODE)malloc(sizeof(NODE));
    // step 2 : Initialization of New Node
    newn->data=No;
    newn->next=NULL;

    if((*First == NULL) && (*Last == NULL))  // Empty LL
    {
        *First = *Last = newn;
        (*Last)->next = *First;   // to make circular(copies adress of first into newNode ->next(*last->next))
    }
    else    // LL contains atleast 1 node
    {
        newn->next = *First;
        *First = newn;
        (*Last)->next = *First;
    }

}

void InsertLast(PPNODE First, PPNODE Last,int No)
{
    // step 1 : Allocate the Memory for New Node
    PNODE newn =(PNODE)malloc(sizeof(NODE));
    // step 2 : Initialization of New Node
    newn->data = No;
    newn->next= NULL;

    if((*First == NULL) && (*Last == NULL))  // Empty LL
    {
        *First = *Last = newn;
        (*Last)->next=*First;
    }
    else           // LL contains at least 1 node
    {
        (*Last)->next=newn;
        *Last=newn;
        (*Last)->next=*First;
    }
}

void DeleteFirst(PPNODE First, PPNODE Last)
{
     if((*First == NULL) && (*Last == NULL)) // LL is Empty
     {
        return;
     }
     else if(*First == *Last)  // Single node in LL
     {
        free(*First);
        *First=NULL;
        *Last=NULL;
     }
     else
     {
        *First= (*First)->next;
        free((*Last)->next);
        (*Last)->next = *First;
     }
}

void DeleteLast(PPNODE First, PPNODE Last)
{
    PNODE temp=*First;

    if((*First == NULL) && (*Last == NULL))
    {
        return;
    }
    else if(*First == *Last) // 1 node in LL
    {
        free(*First);
        *First=NULL;
        *Last=NULL;
    }
    else    // contains more than 1 node
    {
        while(temp->next != (*Last))
        {
            temp = temp->next;
        }
        free(temp->next); // free(*last);
        *Last=temp;
        (*Last)->next= *First; // temp->next=*First;
    }
}

int Count(PNODE First, PNODE Last)
{
    int iCnt=0;
    do
    {
       iCnt++;
       First = First->next;
    } while(First != Last->next);

    return iCnt;  
}

void Display(PNODE First, PNODE Last)
{
    printf("Elements of Singly Circular Linked List are : \n");
    do
    {
       printf("| %d |-> ",First->data);
       First = First->next;
    } while (First != Last->next);
    printf("\n");  
}

void InsertAtPos(PPNODE First,PPNODE Last, int No, int ipos)
{
    int NodeCnt=0,iCnt;
   
    PNODE temp = *First;

    NodeCnt=Count(*First,*Last);

    if((ipos < 1 || ipos > NodeCnt + 1))
    {
        printf("Invalid Position\n");
        return ;
    }

    if(ipos == 1)
    {
        InsertFirst(First,Last,No);
    }
    else if(ipos == NodeCnt + 1)
    {
        InsertLast(First,Last,No);
    }
    else
    {
        // step 1 : Allocate the memory for new node
        PNODE newn =(PNODE)malloc(sizeof(NODE));
        // step 2 : Initialize the new node
        newn->data=No;
        newn->next=NULL;

        for(iCnt=1; iCnt < ipos-1 ; iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;

    }
}

void DeleteAtPos(PPNODE First, PPNODE Last,int ipos)
{
    int NodeCnt=0,iCnt;
    PNODE temp1 = *First;
    PNODE temp2 = NULL;

    NodeCnt=Count(*First,*Last);

    if((ipos < 1) || (ipos > NodeCnt)) // Empty LL
    {
        printf("Invalid Position\n");
        return;
    }
    if(ipos == 1)
    {
        DeleteFirst(First,Last);
    }
    else if(*First == *Last)
    {
        DeleteLast(First,Last);

    }
    else
    {
        for(iCnt=1; iCnt < ipos-1; iCnt++)
        {
            temp1 = temp1->next;
        }
        temp2=temp1->next;
        temp1->next= temp2->next;
        free(temp2);
    }   
}


int main()
{
    int iRet=0;
    PNODE Head = NULL;
    PNODE Tail = NULL;

    InsertFirst(&Head, &Tail, 51);
    Display(Head, Tail);
    iRet=Count(Head,Tail);
    printf("Number of Nodes are : %d\n",iRet);


    InsertFirst(&Head, &Tail, 21);
    Display(Head, Tail);
    iRet=Count(Head,Tail);
    printf("Number of Nodes are : %d\n",iRet);

    DeleteFirst(&Head,&Tail);

    InsertFirst(&Head, &Tail, 11);
    Display(Head, Tail);
    iRet=Count(Head,Tail);
    printf("Number of Nodes are : %d\n",iRet);

    InsertLast(&Head, &Tail, 101);
    Display(Head, Tail);
    iRet=Count(Head,Tail);
    printf("Number of Nodes are : %d\n",iRet);

    InsertFirst(&Head, &Tail, 51);
    InsertFirst(&Head, &Tail, 21);
    InsertFirst(&Head, &Tail, 11);
    Display(Head, Tail);
    InsertLast(&Head, &Tail, 101);
    InsertLast(&Head, &Tail, 111);
    InsertLast(&Head, &Tail, 121);
    Display(Head, Tail);
    DeleteFirst(&Head, &Tail);
    DeleteLast(&Head, &Tail);

    Display(Head, Tail);
    iRet = Count(Head, Tail);
    printf("Number of elements are : %d\n",iRet);

    InsertAtPos(&Head,&Tail,201,6);
    Display(Head, Tail);
    iRet = Count(Head, Tail);
    printf("Number of elements are : %d\n",iRet);

    DeleteAtPos(&Head,&Tail,3);
    Display(Head, Tail);
    iRet = Count(Head, Tail);
    printf("Number of elements are : %d\n",iRet);

    DeleteAtPos(&Head,&Tail,2);
    DeleteAtPos(&Head,&Tail,5);
    Display(Head, Tail);
    DeleteAtPos(&Head,&Tail,2);
    DeleteAtPos(&Head,&Tail,4);
    Display(Head, Tail);
    iRet = Count(Head, Tail);
    printf("Number of elements are : %d\n",iRet);


    return 0;
}