// Structure for singly linear, singly circular, stack & Queue 

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

// push -> to insert data into stack
void Push(PPNODE First, int No)   // Exactly same to same as InsertFirst() of Singly LL
{
    // step 1: Allocate memory for new node
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    int iCnt=0;

    // step 2 : Initialize the New Node
    newn->data=No;
    newn->next=NULL;

    if(*First==NULL) // if stack is Empty
    {
        *First=newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }
    iCnt++;

}

// Pop-> to Delete data from stack
void Pop(PPNODE First)
{
    PNODE temp = *First;

    if(*First == NULL)
    {
        printf("Stack is Empty\n");
        return;
    }
    else
    {
        *First = (*First)->next;

        printf("Poped Element is : %d\n",temp->data);
        free(temp);

    }
}

//Display-> Function to display data from stack
void Display(PNODE First)
{
    PNODE temp = First;

    if(temp == NULL)
    {
        printf("Stack is Empty\n");
        return;
    }
    else
    {
        printf("Elements in Stack are :\n");
    }

    while(temp != NULL)
    {
        printf("| %d |->",temp->data);
        temp = temp->next;
    }
    printf("\n");

}

int main()
{
    PNODE Head=NULL;
    Push(&Head,1);
    Display(Head);

    Push(&Head,11);
    Push(&Head,21);
    Push(&Head,51);
    Display(Head);

    Pop(&Head);
    Pop(&Head);
    Display(Head);
    Pop(&Head);
    Display(Head);
    Pop(&Head);
    Display(Head);

    return 0;
}
