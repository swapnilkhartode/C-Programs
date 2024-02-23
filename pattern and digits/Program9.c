// WAP to calculate Gross Salary.

#include<stdio.h>

int main()
{
    int BS,DA,HRA,GS;

    printf("Enter the Basic salary : \n");
    scanf("%d",&BS);


    DA = (20*BS)/100;
    HRA = (BS*25)/100;

    GS = BS + DA + HRA;

    printf("The Gross Salary is %d\n",GS);

    return 0;
    
}