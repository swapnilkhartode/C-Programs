// chef is watching TV(Volume up down)

#include<stdio.h>

int main()
{
    int XX,YY;

    printf("Enter the current volume : \n");
    scanf("%d",&XX);

    printf("Enter the changed  volume : \n");
    scanf("%d",&YY);

    if((XX > 0 && XX <= 100) && (YY > 0 && YY <= 100))
    {
        if(YY > XX)
        {
            printf("chef can press the volume up button %d times to increase the volume from %d to %d\n",YY-XX,XX,YY);
        }
        else
        {
            //XX > YY
            printf("chef can press the volume down button %d times to decrease the volume from %d to %d\n",XX-YY,XX,YY);
        }
    }
    else if (XX == YY)
    {
        printf("Volume remains same");
    }
    else
    {
        printf("Invalid data\n");
    }
    
    return 0;  
}