#include <stdio.h>

int MultiplicationOfNumbers(int Value1, int Value2)
{

    int Ret = 0;
    Ret = Value1 * Value2;

    return Ret;
}

int main()
{

    int iNo1 = 0;
    int iNo2 = 0;

    int Ans = 0;

    printf("Enter The First Number\n");
    scanf("%d", &iNo1);

    printf("Enter The Second Number\n");
    scanf("%d", &iNo2);

    printf("First Number Is :%d\n", iNo1);
    printf("Second Number IS :%d\n", iNo2);

    Ans = MultiplicationOfNumbers(iNo1, iNo2);

    printf("The Multiplication Of Numbers Is:%d\n", Ans);

    return 0;
}