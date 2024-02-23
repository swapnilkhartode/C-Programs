// WAP in c to count all distinct pairs for a specific difference.

#include<stdio.h>

int main()
{
    int arr[8],i,j,count=0,Diff;

    int len = sizeof(arr)/sizeof(arr[0]);

    printf("Enter the Difference\n ");
    scanf("%d",&Diff);

    printf("Enter the elements in array\n");
    for(i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nthe distinct pairs of difference %d are ",Diff);
    for(i=0;i<len;i++)
    {
        for(j=0;j<len;j++)
        {
            if(arr[i]>arr[j])
            {
                if(arr[i]-arr[j]==Diff)
                {
                    printf("[%d,%d]",arr[i],arr[j]);
                    count++;
                }
            }
        }
        
    }
    
    printf("\nThe Number of distinct pairs for difference %d are  : %d\n",Diff,count);    
}

