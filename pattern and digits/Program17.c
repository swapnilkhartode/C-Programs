// WAP  to enter length in centimetr and convert it into meter and kilometr.
// 1 Metr = 100 Centimetr
// 1 Kilometr = 1000 Metr

#include<stdio.h>

int main()
{
    float Length,Metr , KiloMetr;

    printf("Enter the Length in centimetr : ");
    scanf("%f",&Length);
    
    Metr = (Length/ 100);
    KiloMetr = (Metr/1000);

    printf("Metr is : %f\t  And KiloMetr is : %f\t",Metr,KiloMetr);

    return 0;

}