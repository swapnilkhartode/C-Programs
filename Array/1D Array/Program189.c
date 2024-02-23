// WAP in c to count the number of inversions.

#include<stdio.h>

int main()
{
    int arr[5],i,j,count=0,c,d;

    int len = sizeof(arr)/sizeof(arr[0]);

    printf("Enter the elements in array\n");
    for(i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The inversions are : ");
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(arr[i]>arr[j])
            {
                c=arr[i];
                d=arr[j];
                count++;

                printf("(%d,%d) ",c,d);

            }
        }
        
    }
    printf("\nThe number of inversions can be formed from the array  is : %d\n",count);
}

