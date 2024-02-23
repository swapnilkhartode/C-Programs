/*
input : 4

4
3
2
1


*/ 
// input : 4

// output :   4  3  2   1 

#include<stdio.h>

void Display(int iNo)
{ 
    if(iNo<0)                               //updator
    {
        iNo = -iNo;
    }

  int iCnt = 0;

  for(iCnt = iNo ; iCnt>0 ; iCnt--)
  {
    printf("%d\n",iCnt);

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

