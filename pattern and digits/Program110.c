#include<stdio.h>
int main()
{
    int no,i=2,rem=0,flag=0;
    printf("enter a number\n");
    scanf("%d",&no);

    while(i <= (no/2))
    {
        rem = no % i;

        if(rem == 0)
        {
            flag=1;
            break;
        }
        i++; 
    }

    if(!flag)
    {
        printf("The given number is prime");
    }
    else
    {
        printf("The given number is not prime");
    }

    return 0;
}