#include<stdio.h>

int main()
{
    int i,j,iRow,iCol;

    printf("Enter the Number of Row :");
    scanf("%d",&iRow);

    printf("Enter the Number of Column :");
    scanf("%d",&iCol);

    if(iRow != iCol)
    {
        printf("The Given input is not as per input");

    }
    

    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if(j<=iRow-i)  // j<= 6-i;
            {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;

}