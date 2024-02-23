// WAP in c for substraction of two matrices of same size


#include<stdio.h>

int main()
{
    int iRow,iCol,i,j,iSum=0;;
    printf("Enter the row and column respectively\n");
    scanf("%d%d",&iRow,&iCol);
    int Arr[iRow][iCol];
    int Brr[iRow][iCol];
    printf("Enter the elements in the 1 st Matrix\n");
    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            printf("element - [%d],[%d] :\n",i,j);
            scanf("%d",&Arr[i][j]);
        }
    }

    printf("Enter the elements in the 2 nd array\n");
    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            printf("element - [%d],[%d] :\n",i,j);
            scanf("%d",&Brr[i][j]);
        }
    }

    for(i=0;i<iRow;i++)
    {
        iSum=0;
        for(j=0;j<iCol;j++)
        {
            iSum=Arr[i][j] - Brr[i][j];
            printf("%d\t",iSum);
            
        }
        printf("\n");
    }
    
    
}