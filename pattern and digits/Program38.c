#include<stdio.h>
int main()
{

int a,b,c;
a=10;
b=20;
c=a+b++ + ++a+b--;
printf("\nA=%d\tB=%d\tC=%d\n",a,b,c);
return 0;
}