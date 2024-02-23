// WAP to calculate area of an equilateral traingle. ()

#include<stdio.h>   
// #include<math.h>   a = ((sqrt 3)/4) * (a *a);

int main()
{
    float a, s;

    printf("Enter the Side of an equilateral traingle\n");
    scanf("%f",&s);

    a = ((1.732/4) / ( s *s));


    printf("The area of the equilateral traingle is : %f\n",a);

    return 0;

}