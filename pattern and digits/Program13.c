// WAP to enter tempreture in Fahrenheit and convert it into Celsius.

#include<stdio.h>

int main()
{
    float Celsius, Fahrenheit;

    printf("Enter the tempreture in Fahrenheit : \n");
    scanf("%f",&Fahrenheit);

    Celsius = (Fahrenheit - 32) * (5/9);  //  (9/5)=1.8

    printf("Tempreture in Celsius is : %f",Celsius);
    printf(" Celsius");

    return 0;


}