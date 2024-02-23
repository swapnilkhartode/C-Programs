// WAP in c to find the floor and ceil of the number 0 to 10 from a sorted array.

#include<stdio.h>

int main()
{
    int arr[6],i,j,count=0;
    int len = sizeof(arr)/sizeof(arr[0]);

    printf("Enter the elements in array :\n");
    for(i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<len;i++)
    {
        for(j= count;j<=arr[i];j++)
        {
                if(arr[i]== j)
                {
                    printf("Number : %d ceiling is : %d floor is : %d\n",arr[i],arr[i],arr[i]);
                    
                }
                else
                {
                    printf("Number : %d ceiling is : %d floor is : %d\n",j,j+1,j-1);

                }
                count++; 
        }
        
    }
    if(arr[5]+1 == 10)
    {
        printf("Number : %d ceiling is : %d floor is : %d\n",arr[5]+1,-1,arr[5]);
    }
    
}