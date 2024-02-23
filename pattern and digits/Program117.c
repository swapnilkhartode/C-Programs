// WAP to print all ASCII character with thier values.

#include<stdio.h>

int main()
{
    int iCnt=0;

    printf("Enter the value of Counter : ");
    scanf("%d",&iCnt);

    while(iCnt >= 65 && iCnt <= 122)
    {
        if(iCnt == 91)
        {
            iCnt = iCnt + 6;
        }
        printf("%c\t %d\n",iCnt,iCnt);
        iCnt++;
    }

    return 0;
      
}