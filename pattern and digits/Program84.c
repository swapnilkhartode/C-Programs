#include<stdio.h>
int main()
{
    int CQ,EIQ=170;
    printf("enter a current CQ\n");
    scanf("%d",&CQ);
    if(CQ+7>170)
    {
        printf("yes");

    }
    else
    {
    printf("no");
    }
    return 0;
}


else if(YY > XX)
    {
        printf("chef can press the volume up button %d times to increase the volume from %d to %d\n",YY-XX,XX,YY);
    }
    else if(XX > YY)
    {
        printf("chef can press the volume down button %d times to decrease the volume from %d to %d\n",XX-YY,XX,YY);
    }