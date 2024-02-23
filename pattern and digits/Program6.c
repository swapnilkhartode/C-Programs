// WAP to enter base and height of triangle and find its area.

#include<stdio.h>

int main()
{
    float b,h,a;

    printf("Enter the base of triangle :\n");
    scanf("%f",&b);

    printf("Ente the height of triangle :\n");
    scanf("%f",&h);


    a = (b*h)/2;

    printf("The Area of triangle is : %f\n", a);


    return 0;

}