#include<stdio.h>

void ArrayReverse(int arr[])
{
    printf("reverse array is\n");

    for(int i=5-1;i>=0;i--)
    {
        printf("%d\t",arr[i]);

    }

}
int main()
{
int a[5],i,len;
len=sizeof(a)/sizeof(a[0]);

printf("enter a elements in array\n");

for(i=0;i<len;i++)
{
    scanf("%d",&a[i]);
}
ArrayReverse(a);



return 0;
}