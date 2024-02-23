// To rearrange +Ve & -Ve alternatively

#include<stdio.h>
int main()
{
    int arr[10],brr[10],j,i;
    int len=sizeof(arr)/sizeof(arr[0]);

    printf("ENter the elements in a array\n");
    for(i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>0)
        {
            arr[i]=arr[i];

        }
        else if(arr[i]<0)
        {
            brr[i]=arr[i];
        }
        else
        {

        }
    }
    for(i=0;i<len;i++)
    {
           printf("%d\t",arr[i]);
    }
    
    
    
}