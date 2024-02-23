// common code for all linked list


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

void InsertFirst(PPNODE First, int No)
{
    // LOGIC

}

void Display(PNODE First)
{
    // Logic
}
int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head, 51);
    InsertFirst(&Head, 21);
    InsertFirst(&Head, 11);

    

   

    return 0;
}

/*

**prototype**
void InsertFirst(PPNODE First, int No)  // call by adress = InsertFirst and DeleteFirst
void InsertLast(PPNODE First, int No)
void InsertAtPos(PPNODE First, int No , int Pos)

void DeleteFirst(PPNODE First)
void DeleteLast(PPNODE First)
void DeleteAtPos(PPNODE First, int Pos)

void Display(PNODE First)  // call by value = traversal function
int Count(PNODE First)

*/
//////////////////////////////////////////////////////////////////
/*

**function call**

InsertFirst(&Head, 11)
InsertLast(&Head, 11)
InsertAtPos(&Head,11,5)

DeleteFirst(&Head)
DeleteLast(&Head)
DeleteAtPos(&Head)

Display(Head)
Count(Head)

*/


/*

Topics to read from C programming for Data structures

premitive data types
Size of all data types
Loops (while & for)
Dynamic memory (malloc & calloc)
Call by value and call by reference
Structure Declaration
Memory allocation of structures
Structure Declaration
self referential structure
Memory allocation of structure
Direct and indirect accesing of structure
typedef and its use

*/