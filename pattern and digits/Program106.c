// print multiplication table

#include<stdio.h>

int main()
{
    int iCnt=1,iTable,n;

    printf("Enter the number that table want to print\n :");
    scanf("%d",&n);

    while(iCnt <= n*2)
    {
        iTable = n*iCnt;
        printf("%d\t",iTable);
        iCnt++;
    }
    return 0;
}