#include<stdio.h>

void Factors(int No)
{
    static int  iCnt=1;

    if(iCnt<=No/2)
    {
        if(No % iCnt==0)
        {
            printf("%d ",iCnt);
        }
        iCnt++;
        Factors(No);
    }
}


int main()
{
  int Value =0;
  int iRet=0;

  printf("Enter the number:\n");
  scanf("%d",&Value);
  
  Factors(Value);


    return 0;
}