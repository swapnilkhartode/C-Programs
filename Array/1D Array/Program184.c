// Max subarray

#include<stdio.h>


int main()
{
    int arr[8],i,j,iSum=0,No=0,k=0,flag=0,iMaxSum=0,temp;
    int len = sizeof(arr)/sizeof(arr[0]);

    printf("Enter the elements in array :\n");
    for(i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("\n");


    for(i=0;i<len;i++)
    {   iSum=0;
        iSum=arr[i];
        for(j=0;j<len;j++)
        {
            
            iSum = iSum + arr[j];
            if( iMaxSum < iSum)
            {
                temp=iMaxSum;
                iMaxSum=iSum;
                

            }
        }
        if(iMaxSum > )
       
        
    }

}