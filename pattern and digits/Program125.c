//  print following pattern

#include<stdio.h>

int main()
{
    int i,j,iRow,iCol;

    printf("Enter the number of row : ");
    scanf("%d",&iRow);

    printf("Enter the number of Column : ");
    scanf("%d",&iCol);

    for(i=1;i<= iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
           if(i % 2 !=0)
           {
              printf("*\t");
           }
           else
           {
              printf("#\t");
           }

        }

        printf("\n");
        
    }
    return 0;
}




