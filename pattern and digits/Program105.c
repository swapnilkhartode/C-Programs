//  sum all odd numbers between  1 to n

#include<stdio.h>

int main()
{
    int iCnt=1,n,sum=0;

    printf("Enter the natural number upto print :");
    scanf("%d",&n);

    while(iCnt <= n)
    {
        if(iCnt % 2 == 1)
        {
            sum = sum + iCnt;
        }
        iCnt++;
    }

    printf("The Sum of odd natural numbers is :%d\n",sum);
    return 0;
}