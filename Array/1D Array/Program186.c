/// Wap to input and print array elements using pointer 

#include<stdio.h>
int main()
{
    int *ptr,arr[5],i;
    int len = sizeof(arr)/sizeof(arr[0]);
    printf("Enter the array elements");
    for(i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);
    }
    ptr = arr;
    printf("print the elements of array\n");
    for(i=0;i<len;i++)
    {
        printf("%d\t",*ptr);
        ptr++;
    }


    
}