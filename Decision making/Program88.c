#include<stdio.h>
int main()
{
    int dayno;
    printf("enter a number  of a month in a year\n");
    scanf("%d",&dayno);

    switch(dayno)
    {
        case 1 :
             printf("no of days from jan: 31\n");
        break;

        case 2 :
             printf("no of days from feb: 28\n");
        break;

        case 3 :
             printf("no of days from march: 31\n");
        break;

        case 4 :
             printf("no of days from april: 30\n");
        break;

        case 5 :
             printf("no of days from may: 31\n");
        break;

        case 6 :
             printf("no of days from june: 30\n");
        break;

        case 7:
             printf("no of days from jully: 31\n");
        break;

        case 8:
             printf("no of days from aug: 31\n");
        break;

        case 9 :
             printf("no of days from sep: 30\n");
        break;

        case 10 :
             printf("no of days from oct: 31\n");
        break;

        case 11 :
             printf("no of days from nov: 3o\n");
        break;

        case 12 :
             printf("no of days from dec: 31\n");
        break;

        default:
            printf("Wrong choice");
    }
    return 0;

}