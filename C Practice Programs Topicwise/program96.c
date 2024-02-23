/*
  input :  4 

  output :   A  B  C  D 


 */

#include<stdio.h>
//  ASCII
//American Standard Code for Information Interchange

void Display(int iNo)                  //N
{ 
    if(iNo<0)                               //updator
    {
        iNo = -iNo;
    }

  int iCnt = 0;
   char  ch  = 'A';

  for(iCnt = 1 ; iCnt <=iNo ; iCnt++)
  {
       printf("%c\t",ch );        //Dynamic
       ch++;       
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

