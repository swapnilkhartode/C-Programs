#include<stdio.h>
void DisplayReverse(int iValue)
{
  int iCnt=0;

  printf("_________________________________________________\n");

  for(iCnt=iValue; iCnt>0; iCnt--)
 {
   
  printf("%d\t",iCnt);

 }
 printf("\n________________________________________________\n");

}




int main()


{

 int iNo = 0;

 printf("Enter the number \n");
 scanf("%d",&iNo);

  DisplayReverse(iNo);







    return 0;

}