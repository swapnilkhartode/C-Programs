// PUSH Operation
// Enter the value in a stack and print it.

#include<stdio.h>

int main()
{
    int stack[5],value;;
    int top=-1;
    int max=sizeof(stack)/sizeof(stack[0]);
    for(int j=0;j<max;j++)
    {
          
            top = top +1;
            printf("Enter value in a stack\n");
            scanf("%d",&value);
            stack[top]=value;
       

    }
    printf("Print the value inside the stack\n");
    for(int i=0;i<max;i++)
    {
        printf("%d\t",stack[i]);
    }
    
    

}