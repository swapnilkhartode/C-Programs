#include<stdio.h>
#include<stdlib.h>

 int Minimum(int Arr[],int iSize)       ///5
 {
   int iMin= Arr[0],   iCnt= 0;
 for(iCnt=0 ; iCnt<iSize;iCnt++)       //N
 {
    if(Arr[iCnt] < iMin)
    {
        iMin = Arr[iCnt];
    }
  }
  
  return iMin;

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

  iRet = Minimum(ptr,iLength);
  
  printf("Minimum number is :%d",iRet);


 free(ptr);




    return 0;

}