// WAP to input month number and print total number of days;

#include<stdio.h>

int main()
{
    int MnthNo;

    printf("Enter the month number :\n");
    scanf("%d",&MnthNo);
    switch(MnthNo) 
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
           printf("Total number of days = 31");
           break;

        case 2:
           printf("If leap year then 29 days else 28 days.");
           break;

        case 4:
        case 6:
        case 9:
        case 11:
           printf("Total number of days = 30");
           break;

        default:
           printf("Invalid Data");     
    }
    return 0;
}