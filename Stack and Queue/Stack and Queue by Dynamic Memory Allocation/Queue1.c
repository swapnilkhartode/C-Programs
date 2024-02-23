#include<stdio.h>
#include<stdlib.h>

struct node
{
     int data;
     struct node * next;
};

typedef struct node NODE;
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Enqueue(PPNODE First,int No)
{
    int iCnt;
    PNODE newn=(PNODE)malloc(sizeof(NODE));
    PNODE temp= *First;

    newn->data=No;
    newn->next=NULL;

    if(*First == NULL)
    {
        *First=newn;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next=newn;
    }
    iCnt++;
}

void Dequeue(PPNODE First)
{
    PNODE temp= *First;

    if(temp==NULL)
    {
        printf("Queue is Empty\n");
        return;
    }
    else
    {
        *First = (*First)->next;
        printf("Dequeued elements is : %d\n",temp->data);
        free(temp);
    }
}

void Display(PNODE First)
{
    PNODE temp = First;

    if(temp == NULL)
    {
        printf("Queue is empty\n");
        return;
    }
    else
    {
        printf("Elements in Queue are : \n");
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
    Enqueue(&Head,1);
    Display(Head);

    Enqueue(&Head,11);
    Enqueue(&Head,21);
    Enqueue(&Head,51);
    Display(Head);

    Dequeue(&Head);
    Dequeue(&Head);
    Display(Head);
    Dequeue(&Head);
    Display(Head);
    Dequeue(&Head);
    Display(Head);

    return 0;
}