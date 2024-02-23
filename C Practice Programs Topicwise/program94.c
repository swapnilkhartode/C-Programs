/*
input : 4

 1  *  2  *  3   * 4 * 

 */



#include<stdio.h>

void Display(int iNo)
{ 
    if(iNo<0)                               //updator
    {
        iNo = -iNo;
    }

  int iCnt = 0;

  for(iCnt = 1 ; iCnt <=iNo ; iCnt++)
  {
    printf("%d\t",iCnt);        //Dynamic
    printf("*\t");       //static  or fixed data

  }
  printf("\n");

}

int main()
{
 int iValue = 0;

 printf("Enter Number\n");
 scanf("%d",&iValue);

 Display(iValue);









    return 0;

}

