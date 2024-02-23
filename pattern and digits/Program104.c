//  sum all even numbers between  1 to n

#include<stdio.h>

int main()
{
    int iCnt=1,n,sum=0;

    printf("Enter the natural number upto print :");
    scanf("%d",&n);

    

    while(iCnt <= n)
    {
        if(iCnt % 2 == 0)
        {
            sum = sum + iCnt;
        }
        iCnt++;
    }

    printf("The Sum of Even natural numbers is :%d\n",sum);
    return 0;
}