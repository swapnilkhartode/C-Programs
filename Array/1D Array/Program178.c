// print adress and value of that varible.

#include<stdio.h>

int main()
{
    int a;
    printf("Enter the number :\n");
    scanf("%d",&a);
    int *ptr=&a;


    printf("the Value is : %d and the adrees is : %u",*ptr,ptr);

}