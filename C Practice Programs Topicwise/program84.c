#include<stdio.h>
#include<stdlib.h>

 void  DisplayReverse(int Arr[],int iSize)       ///5
 { 
    int iCnt = 0;

    for(iCnt=iSize - 1 ; iCnt>=0   ; iCnt--)
    {
      printf("%d\t",Arr[iCnt]);
   
    }
 }


int main()
{
  int *ptr = NULL,iLength = 0;
  int i = 0;

  printf("Enter the number of element\n");
  scanf("%d",&iLength);

  ptr= (int *)malloc(iLength*sizeof(int));

  printf("Enter the elements\n");

  for(i = 0 ; i<iLength ; i++)
  {
    scanf("%d",&ptr[i]);

  }

  DisplayReverse(ptr,iLength);
  
 


 free(ptr);




    return 0;

}