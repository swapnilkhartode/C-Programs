/// Wap to input and print sum of array elements using pointer .

#include<stdio.h>
int main()
{
    int *ptr,arr[5],i,iSum=0;
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
        iSum= iSum + *ptr;
        ptr++;
    }
    printf("The sum is : %d",iSum);
 
}