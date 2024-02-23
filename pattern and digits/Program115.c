// WAP to find product of digit of number

#include<stdio.h>

int main()
{
    int No,rem,ProductofDigit=1;

    printf("Enter the number : \n");
    scanf("%d",&No); // 123

    while(No !=0)
    {
        rem = No % 10; // 3
        ProductofDigit = ProductofDigit * rem; //3
        No = No/10; 
    }
    printf("The Product of digit of number is %d\n",ProductofDigit);
}