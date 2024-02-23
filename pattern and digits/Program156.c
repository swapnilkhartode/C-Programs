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
        count=1;
        for(j=1;j<=iCol;j++)
        {
            if((j<=4+i && j>=6-i) || i==5)
            {
                printf("%d ",count); 
                j>=5 ? count--:count++;  
            }
            else
            {
                printf("  ");  // 2 whitespace
            }   
        }
        printf("\n");
    }
    return 0;
}