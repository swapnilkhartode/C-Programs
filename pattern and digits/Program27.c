// WAP to enter the two numbers and check number is even or odd.

#include<stdio.h>

int main()
{
    int iNo1;

    printf("Enter the number :\n");
    scanf("%d",&iNo1);

    ((iNo1 % 2) == 0) ? (printf("The given number is Even")) : (printf("The given number is Odd"));

    return 0;
    
}