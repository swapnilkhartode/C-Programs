// WAP in c for 2D array and print.

#include<stdio.h>

int main()
{
    int iRow,iCol,i,j;
    printf("Enter the row and column respectively\n");
    scanf("%d%d",&iRow,&iCol);
    int Arr[iRow][iCol];
    printf("Enter the elements in the array\n");
    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            printf("element - [%d],[%d] :\n",i,j);
            scanf("%d",&Arr[i][j]);
        }
    }
    
    printf("Print the elements of 2D array\n");

    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            printf("%d ",Arr[i][j]);
            
        }
        printf("\n");
    }
}