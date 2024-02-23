// WAP to input marks of five subjects Physics, Chemistry, Biology, Mathematics and computer. calculate percentage and grade According to given condition.

#include<stdio.h>

int main()
{
    float Sum,Phy,Chem,Bio,Math,Comp,Percnt;

    printf("Enter the marks of Physics : ");
    scanf("%f",&Phy);

    printf("Enter the marks of Chemistry out of 100 : ");
    scanf("%f",&Chem);

    printf("Enter the marks of Biology out of 100: ");
    scanf("%f",&Bio);

    printf("Enter the marks of Math out of 100 : ");
    scanf("%f",&Math);

    printf("Enter the marks of Computer  out of 100: ");
    scanf("%f",&Comp);

   Sum = (Phy + Chem + Bio + Math + Comp );

   Percnt = (Sum / 500)*100;

   printf("Sum is : %f\n",Sum);
   printf("Percent  is : %f\n",Percnt);

   ((Percnt >= 90) && (Percnt <= 100)) ? (printf("Grade A")) :

   ((Percnt >= 80) && ((Percnt < 90))) ? (printf("Grade B")) :

   ((Percnt >= 70) && (Percnt < 80)) ? (printf("Grade C")) :

   ((Percnt >= 60) && (Percnt < 70)) ? (printf("Grade D")) :

   (Percnt >= 40) ? (printf("Grade E")) : (printf("Grade F"));

   return 0;

}