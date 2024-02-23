#include<stdio.h>
int main()
{
    int a[4];
    int len=sizeof(a)/sizeof(a[0]);
    int *ptr;
    ptr=a;
    for(int i=0;i<len;i++)
    {
        scanf("%d",ptr);
        ptr++;
    }
    ptr=ptr-len;

    printf("Print the elements of the array\n");
    for(int i=0;i<len;i++)
    {
        printf("%d",*ptr);
        ptr++;
    }
}
