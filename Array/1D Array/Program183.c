#include<stdio.h>
int main()
{
   int arr[9],i,j,temp,count=0;
   int len = sizeof(arr)/sizeof(arr[0]);

    printf("Enter the elemnts  an array :\n");
    for(i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nUnSorted Array\n");

     for(i=0;i<len;i++)
    {
        printf("%d\t",arr[i]);
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
    printf("\nSorted Array\n");

    for(i=0;i<len;i++)
    {
        printf("%d\t\a",arr[i]);
    }

    for(i=0;i<len;i+=count)
    {
        count=0;
        for(j=0;j<len;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count > (len/2))
        {
            printf("\n%d appears more than %d times in the given array",arr[i],len/2);
            return 0;
        }
    }

    return 0;
}