// WAP to find all factors of a number 

#include<stdio.h>

int main()
{
    int No,iCnt=1,rem=0;

    printf("Enter the number : ");
    scanf("%d",&No);

    printf("The Factors is : ");

    while(iCnt <= (No/2))
    {
        rem = No % iCnt;

        if(rem == 0)
        {
            printf("%d\t",iCnt);
        }
        iCnt++;
    }

}