// WAP to enter any any number and calculate its square root.

#include<stdio.h>
#include<math.h>

int main()
{
    int no;
    float Ans;

    printf("Enter the Number : \n");
    scanf("%d",&no);

    Ans = (sqrt (no));

    printf("The Square Root of %d is : %f\n",no,Ans);

    return 0;
}