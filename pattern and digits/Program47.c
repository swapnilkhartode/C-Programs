// Leap Year or Not.


#include<stdio.h>

int main()
{
    int Year;

    printf("Enter the Year :\n ");
    scanf("%d",&Year);

    (((Year % 4 == 0) && (Year % 400 == 0) || (Year % 100 !=0))) ? (printf("Year is Leap Year\n")) :(printf("Year is  not a Leap Year\n")) ;

    return 0;
}