//POP operation and check the Underflow.
//POP operation madhe fakt Underrflow pahil jat.
/*

We use POP operation on full stack.

.....ALGORYTHM.....
1.Start
2.Declare array of size,and value variable.
3.Set top value is -1
4.if top value is  equal with MAX-1 then show stack is overflow.
5.If top value is not eqaual with MAX-1 then increase top by 1;
6.Store values in stack, stack[top]=value
7.repeat steps 4,5,6 up to stack get overflow
8.STOP

*/ 

#include<stdio.h>
int main()
{
    int stack[5],value;
    int top=-1;
    int MAX = sizeof(stack)/sizeof(stack[0]);

// PUSH Operation
    for(int i=0;i<=MAX;i++)
    {
        if(top==MAX-1)
        {
            printf("\nStack is Overflow\n");
        }
        else
        {
            top=top+1;
            printf("Enter the Value\n");
            scanf("%d",&value);
            stack[top]=value;
        }
    }

    printf("\nPrint the stack\n");
    for(int i=0;i<MAX;i++)
    {
        printf("%d\t",stack[i]);
    }

// POP Operation

    top=MAX-1;

    while(top>=-1)
    {
        if(top==-1)
        {
            printf("\nStack is Underflow\n");
            top=top-1;
        }
        else
        {
            value=stack[top];
            top=top-1;
            printf("\nDeleted value is : %d\n",value);
            if(top>=0)
            {
                printf("Print the stack\n");
                for(int i=0;i<=top;i++)
                {
                    printf("%d",stack[i]);
                    printf("\n");
                }
            }
        }
    }
}