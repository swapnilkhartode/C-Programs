// ISRO


#include<stdio.h>
int main()
{
   int arr[12],brr[12],i,j;
   int len = sizeof(arr)/sizeof(arr[0]);
   printf("Enter the elemnts  an array :\n");
   for(i=0;i<len;i++)
   {
      scanf("%d",&arr[i]);
   }

    for(i=0;i<len;i++)
    {
        brr[i] = arr[11-i]-4;

    }
    

    for(i=0;i<len;i++)
    {
        printf("%c",brr[i]);
    }
    return 0;
}