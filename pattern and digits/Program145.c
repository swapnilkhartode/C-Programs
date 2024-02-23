#include<stdio.h>

int main()
{
    int i,j,iRow,iCol,count;

    printf("Enter the Number of Row :");
    scanf("%d",&iRow);

    printf("Enter the Number of Column :");
    scanf("%d",&iCol);

    for(i=1;i<=iRow;i++)
    {
        count=i;
        for(j=1;j<=iCol;j++)
        {
            if(j==1 || i==1 || j==6-i)
            {
                printf("%d",count++);   
            }
            else
            {
                printf(" ");
                count++;
            }   
        }
        printf("\n");
    }
    return 0;
}