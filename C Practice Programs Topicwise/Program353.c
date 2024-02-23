#include<stdio.h>

// 4
//  4 + 3 + 2 + 1 = 10


int AdditionR(int No)
{
  static  int  Sum = 0;
   static int  iCnt = 1;

   while(iCnt<=No)
   {
    Sum = Sum+iCnt;
    iCnt++;

    AdditionR(No);
   } 
   return Sum;
}


int main()
{
  int Value =0;
  int iRet=0;

  printf("Enter the number:\n");
  scanf("%d",&Value);
  
  iRet = AdditionR(Value);
  printf("Additon is : %d\n",iRet);


    return 0;
}