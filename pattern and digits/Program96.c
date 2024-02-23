// A study has shown that playing a musical instrument helps in increasing ones IQ by 7 points.

#include<stdio.h>

int main()
{
    int X,Y=170;

    printf("Enter the Current IQ of the Chef : \n");
    scanf("%d",&X);

    if(X >=100 && X <=169)
    {
        if((X+7) > Y)
        {
            printf("After learning a musical instrument Chef can beat einstein\n");

        }
        else
        {
            printf("After learning a musical instrument Chef cannot beat einstein\n");
        }
    } 
    else 
    {
        printf("Invalid data \n");
    }

    return 0;
}