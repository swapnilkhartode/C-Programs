#include<stdio.h>

// 4
//  4 + 3 + 2 + 1 = 10

int AdditionI(int No)
{
   int Sum = 0;
   int iCnt = 1;

   while(iCnt<=No)
   {
    Sum = Sum+iCnt;
    iCnt++;
   } 
   return Sum;
}

int AdditionI(int No)
{
   static  Sum = 0;
   int iCnt = 1;

   while(iCnt<=No)
   {
    Sum = Sum+iCnt;
    iCnt++;
   } 
   return Sum;
}


int main()
{
  int Value =0;
  int iRet=0;

  printf("Enter the number:\n");
  scanf("%d",&Value);
  
  iRet = AdditionI(Value);
  printf("Additon is : %d\n",iRet);


    return 0;
}