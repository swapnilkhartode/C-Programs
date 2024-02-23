// Write a c program to print HCf of two number

#include<stdio.h>

int main()
{
    int No1,No2,iCnt=2,hcf=1;

    printf("Enter the first number :\n");
    scanf("%d",&No1); // 12

    printf("Enter the second number :\n");
    scanf("%d",&No2);  // 13

    while(iCnt <= No1  || iCnt <= No2)
    {
        
        if(No1 % iCnt == 0 &&  No2 % iCnt == 0)
        {
            hcf = iCnt; 
        }
        
        iCnt++;
    }

    printf("The HCF is %d",hcf);
    return 0;

}