// WAP TO ENTER THE TWO NUMBER AND CHECK NUMBER IS POSITIVE OR NEGATIVE.


#include<stdio.h>

int main()
{
    int iNo1;

    printf("Enter the number :\n");
    scanf("%d",&iNo1);

    (iNo1 > 0) ? (printf("The number is positive\n")) : (printf("The number is negative\n"));

    return 0;
}