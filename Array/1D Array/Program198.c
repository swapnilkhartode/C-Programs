// Move all zeros to end
#include<stdio.h>

int main()
{
    int Arr[10],i,j=0,temp=0;

    printf("Enter the elements in the array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&Arr[i]);
    }
    for(i=0;i<10;i++)
    {
        if(Arr[i]==0)
        {
             temp=Arr[i];
            for(j=i;j<10-1;j++)
            {
                Arr[j]=Arr[j+1];
            }
            Arr[10-1]=temp;
        }
    }
    printf("print the elements in the array\n");

    for(i=0;i<10;i++)
    {
        printf("%d\t",Arr[i]);
    }
}