// Wap in c to find ceiling in sorted array.

#include<stdio.h>
int main()
{
    int arr[8],i,j,No,count=0,count1=0;
    int len = sizeof(arr)/sizeof(arr[0]);

    printf("Enter the elements in array :\n");
    for(i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to find ceiling in array:\n");
    scanf("%d",&No);
    
    for(i=0;i<len;i++)
    {
                if(arr[i]>No)
                {
                    printf("Number : %d ceiling is : %d\n",No,arr[i]);
                    break;
                }
    }
    printf("Number %d : ceiling is : %d\n",arr[len-1],-1);

    /*    oR 
    for(i=0;i<len;i++)
    {
        for(j=count;j<=arr[i];j++)
        {
                if(arr[i]>No)
                {
                    printf("Number : %d ceiling is : %d\n",No,arr[i]);
                    count1++;
                    break;
                }
                count++;
        } 
        if(count1==1) 
        {
            break;
        }
    }
    printf("Number %d : ceiling is : %d\n",arr[len-1],-1);
    
                
    */
    return 0; 

}