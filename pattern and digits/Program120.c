// Write a c program to print LCM of two number

#include<stdio.h>

int main()
{
    int No1,No2,iCnt=2,lcm=0,hcf=1;

    printf("Enter the first number :\n");
    scanf("%d",&No1);

    printf("Enter the second number :\n");
    scanf("%d",&No2);

    while(iCnt <= No1  || iCnt <= No2)
    {
        
        if(No1 % iCnt == 0 &&  No2 % iCnt == 0)
        {
            hcf = iCnt; // hcf == gcd
        }
        
        iCnt++;
    }

    lcm = (No1*No2)/hcf;

    printf("The HCF is %d",lcm);
    return 0;

}