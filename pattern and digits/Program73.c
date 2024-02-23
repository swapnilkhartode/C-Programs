// WAP to input  cost price and selling price and check profit or loss.

#include<stdio.h>

int main()
{
    int cp,sp,profit,loss;
    printf("Enter the Cost price : \n");
    scanf("%d",&cp);

    printf("Enter the Selling price : \n");
    scanf("%d",&sp);

    

    if(sp>cp)
    {
        profit = sp-cp;
        printf("The Profit is %d\n",profit);
    }
    else
    {
        loss = cp-sp;
        printf("The Loss is %d",loss);
    }

    return 0;
}