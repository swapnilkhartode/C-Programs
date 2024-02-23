// Check the number is perfect or not.

#include<stdio.h>

int main()
{
    int Sum=0,No,iCnt=1,Temp;

    printf("Enter the number :\n");
    scanf("%d",&No);

    Temp=No;

    while(iCnt <= (No/2))
    {
        if(No % iCnt == 0)
        {
            Sum = Sum + iCnt;
        }
        iCnt++;
    }

    if(Temp== Sum)
    {
        printf("The given number is perfect");
    }
    else
    {
        printf("The given number is not perfect");
    }

    return 0;
}