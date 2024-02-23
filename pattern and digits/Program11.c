// WAP to enter P,T,R and calculate Compound interest.

#include<stdio.h>
#include<math.h>

int main()
{
    double Principal,Time,Rate,Amount;
    double CI=0;

    printf("Enter the Value of Principle : \n");
    scanf("%lf",&Principal);

    printf("Enter the Value of Time Period : \n");
    scanf("%lf",&Time);

    printf("Enter the Value of Rate of interest : \n");
    scanf("%lf",&Rate);

    Amount = Principal * (pow((1 + Rate/100),Time));

    CI = Amount - Principal;

    printf("The Compound  interest is : %lf\n",CI);

    return 0;
}