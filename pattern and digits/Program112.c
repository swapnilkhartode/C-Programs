// WAP to find first and last digit of number.

#include<stdio.h>

int main()
{
    int TEMP,temp,No,Last;

    printf("Enter the number : \n");
    scanf("%d",&No);

    temp = No;

    while(No!=0) // 123
    {
        Last = temp % 10; // 3
        TEMP = No; // 1
        No = No/10; // 0

    }
    printf("The First digit is %d\n",TEMP);
    printf("The Last digit is %d\n",Last);

    return 0;
    
}