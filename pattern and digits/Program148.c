// WAP to find max elements in array

#include<stdio.h>

int main()
{
    int a[10],i,iMax=0 ;

    int len = sizeof(a)/sizeof(a[0]);

    printf("Enter the elements of Array :\n");

    for(i=0;i<len;i++)
    {
        scanf("%d",&a[i]);
        
    }
   
    for(i=0;i<len;i++)
    {
        if(iMax < a[i])
        {
            iMax=a[i];
        }

    }
    printf("The Max Elements of Array are : %d \n",iMax);

    return 0;

}