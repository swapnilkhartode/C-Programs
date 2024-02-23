
#include<stdio.h>

int  SumOfDigits(int iNo)
{
  int iDigit = 0;
  int iSum = 0;

  if(iNo<0)
  {
    iNo = -iNo;
    
  }


  while (iNo != 0)
  {
    iDigit =  iNo % 10;
    iNo = iNo  / 10;

    iSum = iSum + iDigit;


  }

  return iSum;

  

}

int main()
{

 int iValue = 0;
 int iRet = 0;
 
 printf("Enter the number:\n");
 scanf("%d",&iValue);

 iRet =  SumOfDigits(iValue);



  printf("Summation of digit:%d\n",iRet);



    return 0;

}