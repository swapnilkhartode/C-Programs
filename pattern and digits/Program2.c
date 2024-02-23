// Write a c program to enter to numbers and perform all arithmetic operations.

#include<stdio.h>

int main()
{
    int a, b, c=0;

    printf("Enter the Value of a :\n");
    scanf("%d",&a);
    printf("Enter the value of b :\n");
    scanf("%d",&b);

    printf("          *** Addition ***\n");
    c = a + b;
    printf("Addition of A and b is : %d\n",c);
    printf("-------------------------------------------------\n");

    printf("         *** Substraction***\n");
    c = a - b;
    printf("Substraction of A and b is : %d\n",c);
    printf("-------------------------------------------------\n");

    printf("         *** Multiplication***\n");
    c = a * b;
    printf("Multiplication of A and b is : %d\n",c);
    printf("-------------------------------------------------\n");

    printf("         ***Division***\n");
    c = a / b;
    printf("Division of A and b is : %d\n",c);
    printf("-------------------------------------------------\n");

    printf("         ***Mod***\n");
    c = a % b;
    printf("Mod or Remainder of A and b is : %d\n",c);
    printf("-------------------------------------------------\n");


    return 0;

}


