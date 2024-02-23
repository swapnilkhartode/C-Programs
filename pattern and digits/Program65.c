// Wap to accept a positive integer less than 500 and prints out the sum of the digits of this number .


#include<stdio.h>

int main()
{
    int No,Sum=0,First,middle,last, temp;

    printf("Enter the number less than 500\n");
    scanf("%d",&No);

    temp =No;

    last = No%10;
    Sum = Sum + last;
    No = No/10;
    middle = No%10;
    Sum = Sum + middle;
    First = No/10;
    Sum = Sum + First;


    printf("Sum of digits of %d is %d\n",temp,Sum);

    return 0;




}