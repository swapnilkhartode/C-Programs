#include<stdio.h>
#include<stdlib.h>

#pragma pack(1) // due to this "size of structure is 12" by removing after this size of structure is 16.

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int main()
{
    

    PNODE newn = (PNODE)malloc(sizeof(NODE)); // dynamic memory (heap)

    newn->data = 11;
    newn->next = NULL;

    printf("%d\n",newn->data);
    printf("Size of structure %d\n",sizeof(NODE));

    return 0;
}