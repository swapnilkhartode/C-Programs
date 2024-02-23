#include<stdio.h>

int main()
{
    int y=0;
    if((y++) | (++y))
    {
        printf("%d",y); //2
    }
}