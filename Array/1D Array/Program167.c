#include<stdio.h>
int main()
{
   int arr[11],brr[11],i,iPos;
   int lenA = sizeof(arr)/sizeof(arr[0]);
   int lenB = sizeof(brr)/sizeof(brr[0]);
   printf("Enter the elemnts  an array :\n");
   for(i=0;i<lenA;i++)
   {
      scanf("%d",&arr[i]);
   }

   printf("Enter the position reverse : \n");
   scanf("%d",&iPos);

   for(i=0;i<(lenA-iPos);i++)
   {
      brr[i]=arr[iPos+i];

   }
   for(i=lenA-iPos; i<(lenA);i++)
   {
     brr[i]=arr[(iPos+i)-lenA];
   }

   printf("Display the B array\n");

   for(i=0;i<lenB;i++)
   {
     printf("%d\t",brr[i]);
   }
   return 0;
}