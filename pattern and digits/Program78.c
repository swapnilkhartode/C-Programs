#include<stdio.h>
int main()
{
    unsigned int res;
    res=(64>>(2+1-2))&(~(1<<2));
    printf("%d",res);
    return 0;
}