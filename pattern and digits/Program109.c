// check pallindrome or not.

#include<stdio.h>

int main()
{
    int No,Rev=0,rem=0,temp;

    printf("Enter the number :\n");
    scanf("%d",&No);

    temp = No;

    while(No !=0)
    {
        rem = No % 10;
        Rev = Rev*10 + rem; //**
        No = No/10;  
    }

    if(Rev == temp)
    {
        printf("The given number is Pallindrome");
    }
    else
    {
        printf("The given number is not Pallindrome");

    }
    return 0;
}