// WAP to to merge 2 array and print third array in ascending order.

#include<stdio.h>
int main()
{
   int arr[5],brr[5],i,j,temp;
   int lenA = sizeof(arr)/sizeof(arr[0]);
   int lenB = sizeof(brr)/sizeof(brr[0]);
   
   int crr[lenA+lenB];
   int lenC = sizeof(crr)/sizeof(crr[0]);

   printf("Enter the elments of A array :\n");
   for(i=0;i<lenA;i++)
   {
     scanf("%d",&arr[i]);
   }

   printf("Enter the elments of B array :\n");
   for(i=0;i<lenB;i++)
   {
     scanf("%d",&brr[i]);
   }
   
   for(i=0;i<lenA;i++)
   {
      crr[i]=arr[i];
   }

   for(i=0;i<5;i++)
   {
      crr[5+i]=brr[i];  //  logic
   }

   for(i=0;i<10;i++)
   {
      for(j=i+1;j<10;j++)     //  i+1 = 
      {
            if(crr[i] > crr[j] )
            {
                temp=crr[i];
                crr[i]=crr[j];
                crr[j]=temp;
            }
      }
      printf("%d\t",crr[i]);

    }

  /* for(i=0;i< 10;i++)
    {
        printf("%d\t",crr[i]);
    } */

   return 0;
}