// WAP to convert a given integer in seconds to hours,minutes and seconds.

#include<stdio.h>

int main()
{
    int sec,min,hour,seconds;

    printf("Enter the seconds :\n");
    scanf("%d",&seconds);

    hour = seconds/3600;
    min = (seconds - hour*3600) / 60;
    sec = (seconds - (hour*3600)-(min*60)); 

    printf("%d Hours : %d Minutes : %d Seconds\n",hour,min,sec);

    return 0;
}