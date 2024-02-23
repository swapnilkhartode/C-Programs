// Wap to print next greater element  in  agiven  unsorted array.

#include<stdio.h>
int main()
{
   int arr[6],brr[6],i,j,count=0,temp=-1;
   int len = sizeof(arr)/sizeof(arr[0]);
   printf("Enter the elemnts  an array :\n");
   for(i=0;i<len;i++)
   {
      scanf("%d",&arr[i]);
   }

    for(i=0;i<len;i++)
    {
        count=0;
        for(j=i+1;j<len;j++)
        {
            if(arr[i]<arr[j] )
            {
                count++;
                brr[i]=arr[j];
                printf("Next bigger element of %d in the array is : %d\n",arr[i],arr[j]);
                break;
            }  
        }
        if(count==0)
        {
            printf("Next bigger element of %d in the array is : %d\n",arr[i],temp);
            brr[i]=temp;
        }
    }

    printf("Next bigger element Array :\n");
    for(i=0;i<len;i++)
    {
        printf("%d\t",brr[i]);
    }
    return 0;
}