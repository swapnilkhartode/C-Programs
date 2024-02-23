// WAP to enter radius of a circle and find its diameter , circumference and area.

#include<stdio.h>

int main()
{
    float r,d,c,a;
    float PI = 3.14;

    printf("Enter the radius of circle is :\n");
    scanf("%f",&r);

    d = 2 * r;
    c = 2 * PI * r;
    a = PI * r * r;

    printf("The diameter is : %f , Circumference is : %f   , Area is %f\n",d,c,a);


    return 0;


}