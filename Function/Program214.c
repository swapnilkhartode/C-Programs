// print the array
#include<stdio.h>

void PrintArray(int Arr[])
{
    printf("print the Array\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\t",Arr[i]);
    }
}

int main()
{
    int a[5],i=0;
    printf("Enter the value in array :\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    PrintArray(a);

    return 0;

    

   

    

}