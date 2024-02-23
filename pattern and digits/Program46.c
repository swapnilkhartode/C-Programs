// WAP to calculate electricity bill

#include<stdio.h>

int main()
{
    float Units,ElectBill;

    printf("Enter the Consumed electricity units :\n");
    scanf("%f",&Units);

    ((Units < 50) && (Units > 0)) ? (printf("Total electricity Bill is : %f",Units*0.50 + (Units*0.50*0.2))) :
    ((Units > 50) && (Units < 150)) ? (printf("Total electricity Bill is : %f",Units*0.75 + (Units*0.75*0.2))) :
    ((Units > 150) && (Units < 250)) ? (printf("Total electricity Bill is: %f",Units*1.20 + (Units*1.20*0.2))) :(printf("Total electricity Bill is : %f",Units*1.50 + (Units*1.50*0.2)));

    return 0;

}

