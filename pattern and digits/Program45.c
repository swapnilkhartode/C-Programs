#include<stdio.h>

int main()
{
    int a=5,b=6,c;

    c= !(++a)||++b;

    printf("\nA=%d %d %d",a,b,c);

    return 0;
}