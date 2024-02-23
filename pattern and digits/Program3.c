//  Write a c program enter length and breadth of rectengular and calculate its Area.

#include<stdio.h>

int main()
{
    float l,b;
    float area=0;

    printf("Enter the length of rectangular :\n");
    scanf("%f",&l);

    printf("Enter the breadth of rectangular :\n");
    scanf("%f",&b);

    area = (l * b);

    printf("Area of the rectangular is : %f\n",area);

    return 0;





}
