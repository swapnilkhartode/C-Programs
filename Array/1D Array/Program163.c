// print the second largest element in array

#include<stdio.h>
int main()
{
   int arr[5],i,j,temp;
   int len = sizeof(arr)/sizeof(arr[0]);
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
   for(i=0;i<len;i++)
   {
      if((len-2)== i)
      {
        printf(" The second largest element is : %d\t",arr[i]);
      }
   
   }
   return 0;
}