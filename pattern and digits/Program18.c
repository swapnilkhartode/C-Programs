// WAP to enter tempreture in Celsius and convert it into Fahrenheit.

#include<stdio.h>

int main()
{
    float Celsius, Fahrenheit;

    printf("Enter the tempreture in Celsius : \n");
    scanf("%f",&Celsius);

    Fahrenheit = (Celsius * 1.8) + 32;  //  (9/5)=1.8

    printf("Tempreture in Fahrenheit is : %f",Fahrenheit);
    printf(" Fahrenheit");

    return 0;


}