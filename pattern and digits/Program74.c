// WAP to check whether number is divisible by 5 and 11 not using if else.

#include<stdio.h>

int main()
{
    int No;

    printf("Enter the number : \n");
    scanf("%d",&No);

    if((No%5==0) && (No%11==0))
    {
        printf("The number is divisible by 5 and 11");

    }
    else
    {
        printf("The number is not divisible by 5 and 11");
    }
    return 0;
    
}