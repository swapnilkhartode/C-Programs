// Wap to convert days in to years , weeks , days.

#include <stdio.h>

int main()
{
    int Day, Years, Weeks,Days;

    printf("Enter the days : \n");
    scanf("%d", &Day);

    Years = (Day / 365);  // 600/365 = 1
    Weeks = (Day - (Years*365)) / 7;   // 33
    Days =  Day -( (Years*365) + (Weeks*7)); // 4


    printf("The Years is  : %d\t  ,   The Weeks is : %d\t  , The Days is : %d\t", Years,Weeks,Days);

    return 0;




    
}