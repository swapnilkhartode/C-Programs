#include<stdio.h>
#include<stdlib.h>

 int CheckLarge(int Arr[],int iSize)       ///5
 {
   int iMax = Arr[0],   iCnt= 0;
 for(iCnt=0 ; iCnt<iSize;iCnt++)       //N
 {
    if(Arr[iCnt] > iMax)
    {
        iMax = Arr[iCnt];
    }
  }
  
  return iMax;

 }


int main()
{
  int *ptr = NULL,iLength = 0 , iRet = 0;
  int i = 0;
  printf("Enter the number of element\n");
  scanf("%d",&iLength);

  ptr= (int *)malloc(iLength*sizeof(int));

  printf("Enter the elements\n");

  for(i = 0 ; i<iLength ; i++)
  {
    scanf("%d",&ptr[i]);

  }

  iRet = CheckLarge(ptr,iLength);
  
  printf("Maximum number is :%d",iRet);


 free(ptr);




    return 0;

}