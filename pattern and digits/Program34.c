// Write a c program to check whether the traingle is equilateral or isoscale or scalene.

// Equilateral= 3 angles are equal
// Isoscale = any of the two angles are equal
// Scalene = 3 angles are different


#include<stdio.h>

int main()
{
    int a,b,c;

    printf("Enter the Angles of Traingle :\n");
    scanf("%d %d %d",&a,&b,&c);

    ((a == b) && (b == c) && (a == c)) ? (printf("The traingle is Equilateral")) :

    ((a == b) || (b == c) || (a == c)) ? (printf("The traingle is Isoscale")) : printf("The traingle is Scalene");

    return 0;

}