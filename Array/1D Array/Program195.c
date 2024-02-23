// Wap to find a pair with given diff in the array.

#include<stdio.h>
#include<stdlib.h>
int main()
{
   int arr[5],brr[5],i,j,Diff=0;
   int lenA = sizeof(arr)/sizeof(arr[0]);
   int lenB = sizeof(brr)/sizeof(brr[0]);
   printf("Enter the elemnts  an array :\n");
   for(i=0;i<lenA;i++)
   {
      scanf("%d",&arr[i]);
   }

   printf("Enter the Difference  in array :\n");
   scanf("%d",&Diff);

   printf("Pair of elements can make given Difference :\n");

   for(i=0;i<lenA;i++)
   {
      for(j=i+1;j<lenA;j++)
      {
        
        if(abs(arr[i]-arr[j])==Diff)
        {
            printf("The Pair are : (%d,%d)\n",arr[i],arr[j]);
        }
      }
   }
  
   return 0;
}