// print all natural number in reverse

#include<stdio.h>

int main()
{
    int iCnt,n;

    printf("Enter the natural number upto print \n:");
    scanf("%d",&n);

   

    iCnt=n;

    while(iCnt >0)
    {
        printf("%d\n",iCnt);

        iCnt--;
    }
    return 0;
}