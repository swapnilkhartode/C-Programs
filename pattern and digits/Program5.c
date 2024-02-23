// WAP to enter two angles of a traingle and find the third angle.


#include<stdio.h>

int main()
{
    float a,b,c;

    printf("Enter the first angle of triangle\n");
    scanf("%f",&a);

    printf("Enter the second angle of traingle\n");
    scanf("%f",&b);

    c = 180 - (a +b);

    printf("The Third angle of triangle is %f\n",c);

    return 0;
}