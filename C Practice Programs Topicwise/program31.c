#include<stdio.h>

//O(N)
void DisplayFactors(int iNo)
{
    /*
    
            (8 % 1) == 0;
            (8 % 2) == 0;
            (8 % 3) == 0;
            (8 % 4) == 0;
            (8 % 5) == 0;
            (8 % 6) == 0;
            (8 % 7) == 0;

    */
    
    int iCnt = 0;
    printf("Factors are: \n");

    for (iCnt=1; iCnt<iNo; iCnt++)
    {
       if((iNo % iCnt)==0)
       {
            printf(" %d\n",iCnt);

       }
    }
   
  
 



}

int main()
{
 int iValue=0;

 printf("Enter the value \n");
 scanf("%d",&iValue);


   DisplayFactors(iValue);

 // printf("The factors of %d is:%d\n",iValue,iRet);




    return 0;

}