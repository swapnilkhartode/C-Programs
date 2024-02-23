#include<stdio.h>

void Factors(int No)
{
    int iCnt=1;

    for(iCnt=1;iCnt<=No/2;iCnt++)
    {
        if(No % iCnt==0)
        {
            printf("%d ",iCnt);
        }
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