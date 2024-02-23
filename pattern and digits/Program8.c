// WAP to calculate Current , voltagr and resistance.

#include<stdio.h>

int main()
{
    float I,V,R;

    printf("Enter the value of current is :\n");
    scanf("%d",&I);
    

    printf("Enter the value of Resistance is :\n");
    scanf("%d",&R);
    
    V = (I/R);

    printf("The value of a Voltage is %f Volt\n",V);

    return 0;

}