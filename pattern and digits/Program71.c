// traingle is valid or not.

#include<stdio.h>

int main()
{
    int Angle1,Angle2,Angle3,Sum;

    printf("Enter the first angle :\n");
    scanf("%d",&Angle1);

    printf("Enter the Second angle :\n");
    scanf("%d",&Angle2);

    printf("Enter the Third angle :\n");
    scanf("%d",&Angle3);

    Sum = Angle1 + Angle2 +Angle3;
    
    if(Sum ==180)
    {
        printf("The Traingle is Valid.\n");
    }
    
    else
    {
        printf("The Traingle is invalid.\n");
    }
    return 0;

}