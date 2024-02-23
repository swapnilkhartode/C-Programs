#include<stdio.h>

int main()
{
    int a[10],i,No,No1;
    printf("Enter the number : \n");
    scanf("%d %d",&No,&No1);

    printf("Enter the elements in array :\n");
    int len = sizeof(a)/sizeof(a[0]);
    
    for(i=0;i<len;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<len;i++)
    {
        if(a[i] == No || a[i] == No1)
        {
            printf("#\t");
        }
        else
        {
            printf("%d\t",a[i]);

        }
        
    }
    return 0;
}


