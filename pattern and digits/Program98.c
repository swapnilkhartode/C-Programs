// print all natural number 

#include<stdio.h>

int main()
{
    int iCnt=1,n;

    printf("Enter the natural number upto print :");
    scanf("%d",&n);

    printf("The natural numbers are :");

    while(iCnt <= n)
    {
        printf("%d\n",iCnt);

        iCnt++;
    }
    return 0;
}