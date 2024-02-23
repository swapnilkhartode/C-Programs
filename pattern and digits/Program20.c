// WAP to find power of any number x^y.

#include<stdio.h>
#include<math.h>

int main()
{
    int no, Power, Ans;

    printf("Enter the Number : \n");
    scanf("%d",&no);

    printf("Enter the Power of Number : \n");
    scanf("%d",&Power);

    Ans = pow(no,Power);

    printf("The Answer of %d rest to %d is : %d\n",no,Power,Ans);
    

    return 0;
}