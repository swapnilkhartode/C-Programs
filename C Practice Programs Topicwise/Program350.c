#include<stdio.h>

void DisplayR()
{
   static int iCnt=1;

    if(iCnt<=4)
    {
      printf("*\t");
      iCnt++;
      DisplayR();   //recursive function
    }   
}

int main()
{
 printf("inside main:\n");

 DisplayR();

 printf("End of main\n");

return 0;
}