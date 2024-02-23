//27)  Wapp in c to find the maximum repeating number in a given array.




#include<stdio.h>
int main()
{
   int arr[10],i,j,temp,count=0,count1=0,c=0;
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
    for(i=0;i<len;i+=count)
   {
      count=0;
      for(j=i;j<len;j++)
      {
            if(arr[i]== arr[j] )
            {
                count++;
            }
            
      }
      if(count > count1)
      {
          count1=count;
          c=i;
          
      }

      
    }
    printf("The maximum repeating number in given array is : %d",arr[c]);
   
   return 0;
}