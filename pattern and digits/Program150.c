// WAP to find even number in array.

#include<stdio.h>

int main()
{
    int a[10],i;

    int len = sizeof(a)/sizeof(a[0]);

    printf("Enter the elements of Array :\n");

    for(i=0;i<len;i++)
    {
        scanf("%d",&a[i]);
        
    }

    printf("The Even Elements of Array are :\n");
   
    for(i=0;i<len;i++)
    {
        if(a[i] % 2 ==0)
        {
            printf("%d\t",a[i]);
        }

    }
    return 0;

}