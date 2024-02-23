// Full  pyramid

#include<stdio.h>

int main()
{
    int i,j,iRow,iCol,count=0;

    printf("Enter the Number of Row :");
    scanf("%d",&iRow);

    printf("Enter the Number of Column :");
    scanf("%d",&iCol);


    for(i=1;i<=iRow;i++)
    {
        count =i;
        for(j=1;j<=iCol;j++)
        {
            
            if(j>=6-i && j<=4+i)
            {
                printf(" %d",count);
                j<5 ? count++:count--;
                  
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

