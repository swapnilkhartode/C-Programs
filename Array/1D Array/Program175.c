// WAP to find two elements whoose sum is closest to zero.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[5],i,j,iMinSum=0,iSum=0,c=0,d=0;
    int len = sizeof(arr)/sizeof(arr[0]);

    printf("Enter the elements in array :\n");
    for(i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);
    }

    iMinSum = arr[0] + arr[1];

// abs= (absolute function in c)is a predefined function in the stdlib.h to return the absolute value of given integer, it only returns positive number.
//  suppose we have a an integer number -5 then abs(-5)=5.
    for(i=0;i<5-1;i++)
    {
        iSum=0;
        for(j=1;j<5;j++)
        {
            iSum = arr[i] + arr[j];
            if(abs(iMinSum) > abs(iSum))  
            {
                iMinSum=iSum;
                c=arr[i];
                d=arr[j];
                
            }

        }
    }
    printf("The pair of elements whose sum is minimum are : [%d , %d]",c,d);
}