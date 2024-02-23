// WAP to print all possible combinations of r elements in a given arrray.

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int arr[6],i,j,r,count=0,k=0,m=0,comb;

    int len = sizeof(arr)/sizeof(arr[0]);
    printf("Enter the combination of how much elements :\n");
    scanf("%d",&r);
    comb=len;
    m=len-1;
   
    printf("Enter the elements in a array a:");
    for(i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("The combinations are :\n");

    
         for(i=0;i<len;i++)
         {
            if(k==comb)
            {
                break;
            }
            for(j=0;j<r+1;j++)
            {
                if(j==m)
                {
                    continue;
                    
                }
                printf("%d ",arr[j]);
            }
            count++;
            m--;
            printf("\n");
            k++;
            
         }
         printf("\nThe number of combinations are %d",count);

   


}