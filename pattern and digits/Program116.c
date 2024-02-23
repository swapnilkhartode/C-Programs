// WAp to enter number number and print it reverse.

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
    printf("The Reverse number is %d\n",Rev);

    return 0;
}