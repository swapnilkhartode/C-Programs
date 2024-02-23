// WAP to calculate sum of elements in array

#include<stdio.h>

int main()
{
    int a[10],i,iSum=0 ;

    int len = sizeof(a)/sizeof(a[0]);

    printf("Enter the elements of Array :\n");

    for(i=0;i<len;i++)
    {
        scanf("%d",&a[i]);
        iSum= iSum + a[i];
    }
    printf("The Elements of Array are : \n");
    for(i=0;i<len;i++)
    {
        printf("%d\t",a[i]);
    }

    printf("\nThe sum of elements in array : %d \n",iSum);

    return 0;

}