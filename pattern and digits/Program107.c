//WAP to count number of digits in number

#include<stdio.h>

int main()
{
    int No,iCnt=0;

    printf("Enter the number :\n");
    scanf("%d",&No);

    while (No != 0)
    {
        No = No/10;
        iCnt++;
    }

    printf("The digits in given number is : %d\n",iCnt);
    return 0;
}