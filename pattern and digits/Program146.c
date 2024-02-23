//WAP  to enter elements in array and display it;


#include<stdio.h>

int main()
{
    int a[10],i ;

    int len = sizeof(a)/sizeof(a[0]);

    printf("Enter the elements of Array :\n");

    for(i=0;i<len;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The Elements of Array are : \n");
    for(i=0;i<len;i++)
    {
        printf("%d\t",a[i]);
    }

    return 0;
}