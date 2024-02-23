// WAP to enter the three numbers from user and find highest number in it.

#include<stdio.h>

int main()
{
    int iNo1,iNo2,iNo3;

    printf("Enter the first number :\n");
    scanf("%d",&iNo1);

    printf("Enter the second number :\n");
    scanf("%d",&iNo2);

    printf("Enter the third number :\n");
    scanf("%d",&iNo3);

    ((iNo1 > iNo2) && (iNo1> iNo3)) ? (printf("The highest number is : %d\n",iNo1)) :

    ((iNo2 > iNo1) && (iNo2> iNo3)) ? (printf("The highest number is : %d\n",iNo2)) :

    ((iNo3 > iNo1) && (iNo3> iNo2)) ? (printf("The highest number is : %d\n",iNo3)) : (printf(""));

    return 0;
}
