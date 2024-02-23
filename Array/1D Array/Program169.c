// Wap to enter five elements in array and reverse it.

#include<stdio.h>
int main()
{
   int arr[5],brr[5],i;
   int lenA = sizeof(arr)/sizeof(arr[0]);
   int lenB = sizeof(brr)/sizeof(brr[0]);
   printf("Enter the elemnts  an array :\n");
   for(i=0;i<lenA;i++)
   {
      scanf("%d",&arr[i]);
   }
   for(i=0;i<lenB;i++)
   {
      brr[i]=arr[4-i];

   }
  
   printf("Display the B array\n");

   for(i=0;i<lenB;i++)
   {
     printf("%d\t",arr[i]);
   }
   return 0;
}