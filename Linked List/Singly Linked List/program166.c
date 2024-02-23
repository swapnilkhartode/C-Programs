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
    // Step1 : Allocate the memory for new node
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    // Step2 : Initialize the node
    newn->data = No;
    newn->next = NULL;

    // Step3: Check Linked list is empty or not
    if(*First == NULL)
    {
        *First = newn;
    }
    else   // If linked list contains atleast one node
    {
        newn-> next = *First;
        *First = newn;

    }

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

1]premitive data types
2]Size of all data types
3]Loops (while & for)
4]Dynamic memory (malloc & calloc)
5]Call by value and call by reference
6]Structure Declaration
7]Memory allocation of structures
8]Structure Declaration
9]self referential structure : if a structure contains a pointer of the same data type, then that type of structure is called as self referential structure.
  Memory allocation of structure.
    struct Demo
    {
        int No;
        struct Demo *Next;  // self referential pointer
    }

10]Direct and indirect accesing of structure
   -> if we have an object of a structure then we can use direct accessing operator. i.e (.)
    struct student
    {
        int Arr[3];
    };
    struct student obj;

    obj.Arr[0]=11;
    obj.Arr[1]=21;
    obj.Arr[2]=51;

  -> but if we have pointer which points to the object of the structure , then we can use Indirect accessing operator(->).
    struct student
    {
        int Marks;
        int Age;
        char Division;
    };
    int main()
    {
        struct student obj;
        struct student *ptr=NULL;

        ptr=&obj;

        ptr->Marks=90;
        ptr->Age=21;
        ptr->Division='A';

        return 0;
    }


11]typedef and its use
   ->

*/