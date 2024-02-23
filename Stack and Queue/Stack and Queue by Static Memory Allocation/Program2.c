//Push operation and check the overflow.
//Push operation madhe fakt overflow pahil jat.
/*

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
    int stack[5],Value;
    int top=-1;
    int MAX = sizeof(stack)/sizeof(stack[0]);

    // Use push operation....
    for(int i=0;i<=MAX;i++)  // 0<5,1<5,2<5,3<5,4<5,5<5(Here condition is false)...
    {
        if(top==MAX-1)
        {
            printf("Stack is Overflow");
        }
        else
        {
            top = top + 1;// -1+1=0,0+1=1.1+1=2,2+1,3+1
            printf("Enter the value in a stack\n");
            scanf("%d",&Value);//1,2,4,7,9
            stack[top]=Value;  /// stack[0]=1;stack[1]=2,stack[2]=4,stack[3]=7,stack[4]=9;

        }
        
    }
}