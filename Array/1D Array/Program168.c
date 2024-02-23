// Wap to enter the 5 values in ascending order print missing elements from array.
#include<stdio.h>
int main()
{
   int arr[5],i,temp=0,j,N=0,flag=0,L;
   int len = sizeof(arr)/sizeof(arr[0]);
   L=len-1;
   printf("Enter the elemnts  an array :\n");
   for(i=0;i<len;i++)
   {
      scanf("%d",&arr[i]);
   }

   for(i=0;i<len;i++)
   {
      for(j=i+1;j<len;j++)
      {
            if(arr[i]> arr[j] )
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
      }
    }
    
    for(i=0;i<L ;i++)
    {
        j=arr[i]+1;
        while(j<arr[i+1])
        {
            printf(" %d\t",j);
            j++;
        }
    }
    
   return 0;
}


