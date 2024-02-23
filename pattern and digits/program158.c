#include<stdio.h>
int main()
{
    int iRow,iCol;
    printf("Enter the number of row\n");
    scanf("%d",&iRow);

    printf("Enter the number of column\n");
    scanf("%d",&iCol);
     
    for(int i=0;i<iRow;i++)
    {
        for(int j=0;j<iCol;j++)
        {
            if(i%2==0)
            {
                printf("%d\t",i+j+1);
            }
            else
            {
                printf("%d\t",i+j+1);
            } 
        }
        printf("\n");  
    }
}