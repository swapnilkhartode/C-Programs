#include<stdio.h>
void DisplayReverse(int iValue)
{
  int iCnt=0;

  printf("______________________________________________________\n");

 iCnt=iValue; 

  while(iCnt>0)
 {
   
  printf("%d\t",iCnt);
  
 iCnt--;



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