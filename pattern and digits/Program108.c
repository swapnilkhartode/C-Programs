// check number is duck or not.

#include<stdio.h>

int main()
{
    int No,iCnt,rem,iDigit=0,NDuck=0;

    printf("Enter the number :\n");
    scanf("%d",&No);

    while(No != 0)
    {
        rem = No % 10;
        iDigit++;//  consider 0 to 9
        if(rem == 0)
        {
            printf("The given number is Duck");
            break;
        }
        else
        {
            NDuck++; // //  consider 1 to 9
        }
        
        No = No /10;
    }

    if(iDigit == NDuck)
    {
        printf("The given number is not duck");
    }
    return 0;
}