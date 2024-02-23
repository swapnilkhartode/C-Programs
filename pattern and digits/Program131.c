#include<stdio.h>

int main()
{
    int i,j,iRow,iCol;

    printf("Enter the Number of Row :");
    scanf("%d",&iRow);

    printf("Enter the Number of Column :");
    scanf("%d",&iCol);

    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if(j==1 || i==1 || j== 7-i )
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;

}