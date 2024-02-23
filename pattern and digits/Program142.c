#include<stdio.h>

int main()
{
    int i,j,count=0,count1=1,iRow,iCol;

    printf("Enter the Number of Row :");
    scanf("%d",&iRow);

    printf("Enter the Number of Column :");
    scanf("%d",&iCol);

    count=iRow;

    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if(j%2 !=0)
            {
                printf("%d\t",count);
                count++; // count = count-2;
            }
            else
            {
                printf("%d\t",count1*count1);
                count1++;
            }
        }
    }
    return 0;
}