#include<stdio.h>

int  FactorsSum(int No)
{
    static int  iCnt=1;
    static int iSum=0;

    if(iCnt<=No/2)
    {
        if(No % iCnt==0)
        {
            
            iSum = iSum + iCnt;
        }
        iCnt++;
        FactorsSum(No);
    }
    return iSum;
}


int main()
{
  int Value =0;
  int iRet=0;

  printf("Enter the number:\n");
  scanf("%d",&Value);
  
  iRet = FactorsSum(Value);
  printf("Summation is  %d\n",iRet);

    return 0;
}