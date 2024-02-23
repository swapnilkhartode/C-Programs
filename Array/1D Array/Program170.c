// Wap to find a pair with given sum in the array.

#include<stdio.h>
#include<stdlib.h>
int main()
{
   int arr[5],i,j,sum=0;
   int lenA = sizeof(arr)/sizeof(arr[0]);
   
   printf("Enter the elemnts  an array :\n");
   for(i=0;i<lenA;i++)
   {
      scanf("%d",&arr[i]);
   }

   printf("Enter the sum  in array :\n");
   scanf("%d",&sum);

   printf("Pair of elements can make given sum :\n");

   for(i=0;i<lenA;i++)
   {
      for(j=i+1;j<lenA;j++)
      {
        
        if(abs(arr[i]+arr[j])==sum)
        {
            printf("The Pair are : (%d,%d)\n",arr[i],arr[j]);
        }
      }
   }
  
   return 0;
}