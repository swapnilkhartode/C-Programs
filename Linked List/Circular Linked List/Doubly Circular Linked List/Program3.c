#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)     // 7th January new PPA batch starts
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, PPNODE Last, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE)); 

    newn->data = no;
    newn->next = NULL;
    newn -> prev = NULL;

    if((*First == NULL) && (*Last == NULL)) // LL is empty
    {
        *First = newn;
        *Last = newn;
        
        (*First)->prev = *Last;
        (*Last)->next = *First;
        

    }
    else    // If LL contains one or more nodes
    {
        newn->next = *First;
        (*First)->prev = newn;
        *First = newn; 
    }

    (*First)->prev = *Last;
    (*Last)->next = *First;
}

void InsertLast(PPNODE First, PPNODE Last, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE)); 

    newn->data = no;
    newn->next = NULL;
    newn -> prev = NULL;

    if((*First == NULL) && (*Last == NULL)) // LL is empty
    {
        *First = newn;
        *Last = newn;
    }
    else    // If LL contains one or more nodes
    {
        (*Last) -> next = newn;
        newn->prev = *Last;
        *Last = newn;
    }

    (*First)->prev = *Last;
    (*Last)->next = *First;
}

void DeleteFirst(PPNODE First, PPNODE Last)
{
    if((*First==NULL) && (*Last==NULL))
    {
        printf("Linked List is Empty\n");
        return ;

    }
    else if(*First == *Last)
    {
        free(*First);
        *First = NULL;
        *Last=NULL;
    }
    else
    {
        *First = (*First)->next;
        free((*First)->prev);
        (*Last)->next=*First;
        (*First)->prev= *Last;
    }

}
 

void DeleteLast(PPNODE First, PPNODE Last)
{
    if((*First==NULL) && (*Last==NULL))
    {
        printf("Linked List is Empty\n");
        return ;

    }
    else if(*First == *Last)
    {
        free(*First);
        *First = NULL;
        *Last=NULL;
    }
    else
    {
        *Last = (*Last)->prev;
        free((*Last)->next); // free((*First)->prev);
        (*Last)->next=*First;
        (*First)->prev= *Last;
    }
}
void Display(PNODE First, PNODE Last)
{
    if(First == NULL && Last == NULL)
    {
        printf("Linked list is empty\n");
        return;
    }

    printf("Elements of Linked list are : \n");
    do
    {
        printf("| %d |<=> ",First->data);
        First = First -> next;
    }while(First != Last->next);

    printf("\n");
}

int Count(PNODE First, PNODE Last)
{
    int iCnt = 0;

    if(First == NULL && Last == NULL)
    {
        return iCnt;
    }

    do
    {
        iCnt++;
        First = First -> next;
    }while(First != Last->next);

    return iCnt;
}

void InsertAtPos(PPNODE First,PPNODE Last,int No,int iPos)
{
    int NodeCnt,iCnt;
    PNODE temp = *First;

    NodeCnt=Count(*First,*Last);

    if((iPos < 1) || (iPos > NodeCnt+1))
    {
        printf("Invalid Position\n");
        return;
    }


    if(iPos==1)
    {
        InsertFirst(First,Last,No);
    }
    else if(iPos== NodeCnt+1)
    {
        InsertLast(First,Last,No);
    }
    else
    {
        // step 1 : Allocate Memory for New Node.
        PNODE newn=(PNODE)malloc(sizeof(NODE));

        // step 2 : Initialize the New Node
        newn->data=No;
        newn->next=NULL;
        newn->prev=NULL;

        for(iCnt=1;iCnt < iPos-1;iCnt++)
        {
            temp=temp->next;
        }

        newn->next=temp->next;
        temp->next->prev=newn;
        temp->next=newn;
        newn->prev=temp;

    }
}

void DeleteAtPos(PPNODE First,PPNODE Last,int iPos)
{
    int NodeCnt,iCnt;
    PNODE temp= *First;

    NodeCnt=Count(*First,*Last);

    if((iPos < 1) || (iPos > NodeCnt))
    {
        printf("Invalid Position\n");
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst(First,Last);
    }
    else if(iPos==NodeCnt)
    {
        DeleteLast(First,Last);
    }
    else
    {
        for(iCnt=1; iCnt < iPos-1; iCnt++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        free(temp->next->prev);
        temp->next->prev=temp;

    }
}
int main()
{
    int iRet = 0;

    PNODE Head = NULL;
    PNODE Tail = NULL;

    InsertFirst(&Head,&Tail,51);
    InsertFirst(&Head,&Tail,21);
    InsertAtPos(&Head,&Tail,11,2);
    
    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Number of nodes are : %d\n",iRet);

    InsertLast(&Head,&Tail,101);
    InsertLast(&Head,&Tail,111);
    InsertAtPos(&Head,&Tail,11,4);

    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Number of nodes are : %d\n",iRet);

    DeleteFirst(&Head,&Tail);
    Display(Head,Tail);

    DeleteLast(&Head,&Tail);
    Display(Head,Tail);

    DeleteAtPos(&Head,&Tail,3);
    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Number of nodes are : %d\n",iRet);

    DeleteFirst(&Head,&Tail);
    Display(Head,Tail);

    DeleteLast(&Head,&Tail);
    Display(Head,Tail);

    DeleteAtPos(&Head,&Tail,3);
    Display(Head,Tail);
    iRet = Count(Head,Tail);
    printf("Number of nodes are : %d\n",iRet);

    DeleteLast(&Head,&Tail);
    Display(Head,Tail);


    

    return 0;
}