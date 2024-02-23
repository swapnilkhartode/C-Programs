// 32) WAP in c to find the maximum for each and every contigious subarray of size k from given array.

#include<stdio.h>
int main()
{
    int arr[10],i,j,SubSize,iMax=0;
    int len= sizeof(arr)/sizeof(arr[0]);
    printf("Enter the subarray size\n");
    scanf("%d",&SubSize);

    printf("Enter the elements in array\n");
    for(i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);

    }
    
    for(i=0;i<=len-SubSize;i++)
    {
        iMax=arr[i];
        for(j=i;j<SubSize+i;j++)
        {
           
                if(iMax<arr[j])
                {
                    iMax=arr[j];
                }

                printf("%d ",arr[j]);
  
        }
        printf("------> %d\n",iMax);

    }
}