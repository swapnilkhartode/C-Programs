// WAP to display suitable message according to the temp.

#include<stdio.h>

int main()
{
    int Tempreture;

    printf("Enter the Tempreture :\n");
    scanf("%d",&Tempreture);

    ((Tempreture < 0)) ? (printf("Freezing Weather")) :

    ((Tempreture > 0) && (Tempreture <= 10)) ? (printf("Very Cold Weather")) :

    ((Tempreture > 10) && (Tempreture <= 20)) ? (printf("Cold Weather")) :

    ((Tempreture > 20) && (Tempreture <= 30)) ? (printf("Normal in Tempreture")) :

    ((Tempreture > 30) && (Tempreture <= 40)) ? (printf("Hot")) : (printf("Its Very Hot"));

    return 0;

}