// WAP  to calculate total average and percentage of six subjects.

#include<stdio.h>

int main()
{
    int Chem,Phy,Marathi,Hindi,Math,Eng;
    float Avg,Percentage,Sum;

    printf("Enter the marks of Chem out of 100 :\n");
    scanf("%d",&Chem);

    printf("Enter the marks of Phy out of 100  :\n");
    scanf("%d",&Phy);

    printf("Enter the marks of Marathi out of 100 :\n");
    scanf("%d",&Marathi);

    printf("Enter the marks of Hindi out of 100  :\n");
    scanf("%d",&Hindi);

    printf("Enter the marks of Math out of 100  :\n");
    scanf("%d",&Math);

    printf("Enter the marks of Eng out of 100 :\n");
    scanf("%d",&Eng);  

    Sum = Chem + Phy + Marathi + Hindi + Math + Eng;

    Avg = Sum/6;

    Percentage = (Sum/600)*100;

    printf("The Avg is : %f\t  And The Percentage is : %f\t",Avg,Percentage);

    return 0;



}