#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node   // circular linked list asel tar 2 pointer avashyak astat, 1lya ani shevatachya node cha adress hold karayla.
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL;



    return 0;
}