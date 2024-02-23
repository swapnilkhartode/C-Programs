// WAP to input and print array elements by using pointer.

#include<stdio.h>
int main()
{
    int *ptr,arr[5],i;
    int len=sizeof(arr)/sizeof(arr[0]);
    ptr=arr;

    printf("Enter the elements of array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Print the array reverse\n");
    for(i=len-1;i>=0;i--)
    {
       
        printf("%d\t",*(ptr+i));// *(ptr+i);
        
         
    }

    return 0;
}