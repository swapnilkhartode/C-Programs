// Sum of all natural numbers from 1 to 100

#include<stdio.h>

int main()
{
    int iCnt=0,n,sum=0;

    printf("Enter the Natural number upto print :");
    scanf("%d",&n);

    

    while(iCnt <= n)
    {
        sum = sum + iCnt;
        
        iCnt++;
    }

    printf("The Sum is : %d\n",sum);
    return 0;
}