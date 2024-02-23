// WAP to find sum of digit of number

#include<stdio.h>

int main()
{
    int No,rem,SumofDigit=0;

    printf("Enter the number : \n");
    scanf("%d",&No);

    while(No !=0)
    {
        rem = No % 10;
        SumofDigit = SumofDigit + rem;
        No = No/10;
    }
    printf("The Sum of digit of number is %d\n",SumofDigit);
}