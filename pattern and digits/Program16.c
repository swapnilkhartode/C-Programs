// Write a C program to Reverse a number .

#include<stdio.h>

int main()
{
    int no, First,Last,Rev,middle;

    printf("Enter the number :");
    scanf("%d",&no);

    First = no%10; //3
    no = no/10; // 12
    middle = no%10;// 2
    Last = no/10; // 1

    Rev = (First*100) + (middle*10) + (Last*1);

    printf("The reverse Number is : %d\n",Rev);

    return 0;

    
}