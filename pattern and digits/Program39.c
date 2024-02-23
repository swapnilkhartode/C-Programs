#include<stdio.h>

int main()
{

int a=5,b;

b=++a>>2 && a++ + ++a;
 
printf("\nA=%d\tB=%d\n",a,b);
return 0; 
}
