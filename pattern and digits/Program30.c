// Electricity bill

#include<stdio.h>

int main()
{
    float MetrReading,PerURate,Bill;

    printf("Enter the Meter Reading and Per umit Rate respectively :\n");
    scanf("%f %f",&MetrReading,&PerURate);

    Bill = (MetrReading * PerURate );

    (Bill > 2000) ? (printf("bill with 20 percent of discount %f\t",Bill-(Bill*20/100))):(printf("bill is %f",Bill));
    return 0;
    
    
    
    
    
    


}