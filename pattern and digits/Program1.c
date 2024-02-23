// Calculate the sum of two numbers 

#include<stdio.h>
#include<conio.h>

int main()
{
    // clrscr();    It is Used for clearing the Screen After execution of Program.

    int a, b, c=0;

    printf("Enter the Value of a :\n");
    scanf("%d",&a);
    printf("Enter the value of b :\n");
    scanf("%d",&b);

    c=a+b;

    printf("The Sum is : %d\n",c);

    return 0;

}