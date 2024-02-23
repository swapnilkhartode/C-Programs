// print all even numbers from 1 to 100

#include<stdio.h>

int main()
{
    int iCnt=1,n;

    printf("Enter the Even number upto print :");
    scanf("%d",&n);

    

    while(iCnt <= n)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\t",iCnt);
        }
        
        iCnt++;
    }
    return 0;
}