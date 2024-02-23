// WAP in c for Multiplication  of two matrices .

#include<stdio.h>

int main()
{
    int iRow,iCol,i,j,iMult=1,k=0;
    printf("Enter the row and column respectively\n");
    scanf("%d%d",&iRow,&iCol);
    int Arr[iRow][iCol];
    int Brr[iRow][iCol];
    int Mrr[iRow][iCol];
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
       
        for(j=0;j<iCol;j++)
        {
            Mrr[i][j]=0;
            for(k=0;k<iCol;k++)
            {
                Mrr[i][j]=Mrr[i][j] + Arr[i][k]*Brr[k][j]; // logic
            }
        }
     
    } 

    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            printf("%d ",Mrr[i][j]);
        }
        printf("\n");
    }
}