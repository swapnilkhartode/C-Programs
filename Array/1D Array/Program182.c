// Wap to calculate power of any number by using pointer.

#include<stdio.h>
#include<math.h>

int main()
{
    int No,power,*ptr,Result=0;

    printf("Enter the number and power respectively\n ");
    scanf("%d %d",&No,&power);

    ptr=&No;
    Result=pow(*ptr,power);

    printf("The Calculations is : %d",Result);



}