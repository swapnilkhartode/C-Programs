// WAP in c to find the majority element of an array.



#include<stdio.h>
int main()
{
   int arr[5],i,j,temp,count,flag=0;
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
      for(j=0;j<len;j++)
      {
            if(arr[i]== arr[j] )
            {
                count++;
            }
            
      }
      if(count > (len/2))
      {
          flag=1;
          break;
      }

      
    }
    if(flag==1)
    {
        printf("The majority element is : %d\n",arr[i]);
    }
    else
    {
        printf("There are no majority elements in given array\n");
    }
    
   
   return 0;
}