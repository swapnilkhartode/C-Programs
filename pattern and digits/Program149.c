// WAP to find min elements in array

#include<stdio.h>

int main()
{
    int a[10],i,iMin=0 ;

    int len = sizeof(a)/sizeof(a[0]);

    printf("Enter the elements of Array :\n");

    for(i=0;i<len;i++)
    {
        scanf("%d",&a[i]);
        
    }
    iMin = a[0];
    for(i=0;i<len;i++)
    {
        if(iMin > a[i])
        {
            iMin=a[i];
        }

    }
    printf("The Max Elements of Array are : %d \n",iMin);

    return 0;

}