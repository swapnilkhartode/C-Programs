#include<stdio.h>
int main()
{
    int weekno;
    printf("enter a day number\n");
    scanf("%d",&weekno);

    switch(weekno)
    {
        case 1: 
               printf("Monday\n");
        break;

        case 2:
             printf("Thuesday\n");
        break;

        case 3:
             printf("Wednesday\n");
        break;

        case 4:
             printf("Thursday\n");
        break;

        case 5:
             printf("Friday\n");
        break;

        case 6:
             printf("Saturday\n");
        break;

        case 7:
             printf("Sunday");
        break;

        default:
               printf("wrong choice");      
     
    }
    return 0;
}