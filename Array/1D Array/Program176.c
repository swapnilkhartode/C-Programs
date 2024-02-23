// WAP to find a subarray with given sum from the given array?



#include<stdio.h>


int main()
{
    int arr[8],i,j,iSum=0,No=0,k=0,flag=0;
    int len = sizeof(arr)/sizeof(arr[0]);

    printf("Enter the elements in array :\n");
    for(i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the sum \n :");
    scanf("%d",&No);
    printf("\n");

    for(i=0;i<len;i++)
    {   iSum=0;
        iSum=arr[i];
        for(j=i+1;j<len;j++)
        {
            
            iSum = iSum + arr[j];
            if(No == iSum)
            {
                printf("[%d..%d] -- {",i,j);
                k=i;

                while(k<=j)
                {
                    printf("  %d",arr[k]);
                    k++;
                    flag=1;

                }
                if(flag)
                {
                    printf(" }\n\n");

                }
                flag=0;

            }
        }
       
        
    }

}