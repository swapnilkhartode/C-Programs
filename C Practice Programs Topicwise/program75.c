#include<stdio.h>
#include<stdlib.h>

void DisplayEvenOdd(int Arr[],int iSize)
{
   int iCnt = 0; int iEvenCnt = 0;
   int OddCnt = 0;

   for(iCnt = 0; iCnt<iSize;iCnt++)
   {
      if(Arr[iCnt]%2==0)
      {
        iEvenCnt++;
        
      }

      else
      {
        OddCnt++;
      }
    

   }
    printf("number of even elements are :%d\n",iEvenCnt);
     printf("number of  odd elements are :%d\n",iSize -iEvenCnt);
  

}

int main()
{

 int *ptr = NULL;
 int iLength = 0 , i = 0 , iRet = 0;

 //step 1 :accept size of array
 printf("Enter number of elements\n");
 scanf("%d",&iLength);

 //step 2 : allocate memory for array

 ptr = (int *)malloc(iLength*sizeof(int));

 //step 3 : Accept the elements for array

 printf("Enter the elements of array\n");
 for(i = 0 ;i<iLength ; i++)
 {
    scanf("%d",&ptr[i]);

 }
 // step 4 : call the function

  DisplayEvenOdd(ptr,iLength);



 //step 6: deallocate the memory

  // printf("NUmber of even elements are :%d",iRet);

 free(ptr);








    return 0;

}
