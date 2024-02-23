// print prime numbers from array

#include<stdio.h>

int main()
{
    int a[10],i,j,k,count=0;

    printf("Enter the elements in array :\n");
    int len = sizeof(a)/sizeof(a[0]);


    for(i=0;i<len;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nThe prime elements in array :\n");

    for(k=0;k<len;k++)
    {
        
        count=0;
        for(j=1;j<=a[k]/2;j++)
        {
            if(a[k]%j==0)
            {
                count++;
            }
            
        }
        if(count==1)
        {
            printf("%d\t\a",a[k]);
        }
    }

    return 0;
}