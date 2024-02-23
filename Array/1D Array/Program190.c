// WAP in c to count the number of inversions.

#include<stdio.h>

int main()
{
    int arr[5],i,j,count=0,iMaxDiff=0,c,d,temp;

    int len = sizeof(arr)/sizeof(arr[0]);

    printf("Enter the elements in array\n");
    for(i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);
    }
   
    
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(arr[i]<arr[j])
            {
                if(iMaxDiff < (arr[j]-arr[i]))
                {
                    iMaxDiff=(arr[j]-arr[i]);
                    c=arr[i];
                    d=arr[j];
                }
            }
        }
        
    }
    printf("the elements which provide maximum difference is : %d,%d\n",c,d);
    printf("The maximum difference between two elements in the array is : %d\n",iMaxDiff);    
}

