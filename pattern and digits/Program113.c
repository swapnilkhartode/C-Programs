// WAP to find  sum of first and last digits of number

#include<stdio.h>

int main()
{
    int TEMP,temp,No,Last;

    printf("Enter the number : \n");
    scanf("%d",&No);

    temp = No;

    while(No!=0)
    {
        Last = temp % 10;
        TEMP = No;
        No = No/10;

    }
    printf("The First digit is %d\n",TEMP);
    printf("The Last digit is %d\n",Last);
    printf("The sum of First and last digit is %d\n",TEMP + Last);

    return 0;
    
}