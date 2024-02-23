#include<stdio.h>
int main()
{
    int f,l,p=1,t,mid,no;
    printf("enter a number\n");
    scanf("%d",&no);

    t=no; // 123
    while(no>0)
    {
        p=p*10;
        no=no/10;

    }

    no=t;
    p=p/10;
    l=no%10;
    f=no/p;
    mid=(no%p)/10;

    t=l*p+mid*10+f;
    printf("%d",t);
    
    return 0;
}
