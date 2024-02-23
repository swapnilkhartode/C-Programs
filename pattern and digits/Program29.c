// input selling price and cost price of item and check seller made profit or loss using conditional operator
#include<stdio.h>
int main()
{
    int sp,cp;
    printf("enter a value of sp and cp\n");
    scanf("%d %d",&sp,&cp);

    (sp>cp)  ? (printf("seller in profit")): (printf("seller in loss"));
    return 0;

}