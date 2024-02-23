//Display Non factors of a number


//INput: 6
//Output: 4   5  
#include<stdio.h>

//Input: 15
//Output : 2  4  6  7  8  9  10  11 12  13   14



int SumNonFactors(int iNo)
{
 int iCnt = 0;
 int iSum = 0;


 for(iCnt=1; iCnt<iNo; iCnt++)
 {
     if((iNo % iCnt) !=0)
     {
        iSum = iSum + iCnt;

     }
      
      

 }
  return  iSum;


}



int main()
{
  int iValue = 0;
  int iAns=0;

  printf("Enter the Number\n");
  scanf("%d",&iValue);

  iAns=SumNonFactors(iValue);

 printf("the addition of non factors is:%d",iAns);



    return 0;

}