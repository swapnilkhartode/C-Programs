// Wap to calculate Addition,sub,mult,div by using pointers.

#include<stdio.h>
int main()
{
    int a,b,c=0;
    printf("Enter the value of A and B respectively\n");
    scanf("%d %d",&a,&b);
    int *ptr=&a;
    int *ptr1=&b;

    printf("//////////////   Addition of A & B//////////////    \n\n");

    c= *ptr + *ptr1;
    printf("%d\n",c);

    printf("//////////////   Subsrtaction of A & B//////////////    \n\n");
    c= *ptr - *ptr1;
    printf("%d\n",c);

    printf("//////////////   Multiplication of A & B//////////////    \n\n");
    c= *ptr * *ptr1;
    printf("%d\n",c);

    printf("//////////////   Division of A & B//////////////    \n\n");
    c= *ptr / *ptr1;
    printf("%d\n",c);



















}