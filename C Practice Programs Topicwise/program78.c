//calculate frequency of a number
#include<stdio.h>
#include<stdlib.h>
int CalculateFrequency(int Arr[],int iSize,int iNo)
{
   int iCnt = 0; int iFrequency = 0;
  

   for(iCnt = 0; iCnt<iSize;iCnt++)
     {
      
       if(Arr[iCnt]==iNo)
       {
        iFrequency++;
       }

    

   }
   return iFrequency;
    
}

int main()
{

 int *ptr = NULL;
 int iLength = 0 , i = 0 , iRet = 0 , iValue = 0;

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

 printf("Enter the number to findout frequency\n");
 scanf("%d",&iValue);

 // step 4 : call the function

 iRet = CalculateFrequency(ptr,iLength,iValue);


 printf("frequency of %d is %d\n",iValue,iRet);
 //step 6: deallocate the memory

  // printf("NUmber of even elements are :%d",iRet);

 free(ptr);








    return 0;

}

