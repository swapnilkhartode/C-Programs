#include<stdio.h>
#include<stdlib.h>
//float Average(int  *Arr,int iSize)
float Average(int Arr[],int iSize)
{
  int iSum  = 0,iCnt = 0;
  for(iCnt=0; iCnt< iSize; iCnt++)
  {
    iSum = iSum +Arr[iCnt];

  }
  return (iSum / iSize);

}


int main()
{
  int *ptr = NULL;
  int iLength = 0;
  int i = 0;
  float fRet = 0.0f;



  printf("Enter the number of elements\n");
  scanf("%d",&iLength);

  ptr = (int *) malloc(iLength *sizeof(int));
 //ptr = (int *)malloc(5*4)
  printf("please Enter the numbers:\n");
  for(i = 0; i<iLength; i++)
  {
    scanf("%d",&ptr[i]);

  }

 // fRet =Average(500,5);
  fRet = Average(ptr,iLength);
  printf("Average is :%f",fRet);

  free(ptr);      //free(500)

    return 0;

}