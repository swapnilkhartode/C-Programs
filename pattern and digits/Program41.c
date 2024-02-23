#include<stdio.h>

int main()
{
    int a =5, b=6,c;

    c = a>6 && ++a ;

    printf("\nA=%d\tB=%d\tC=%d",a,b,c);

    return 0;
}