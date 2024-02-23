#include<stdio.h>

int main()
{
    int i,j,iRow,iCol,count;
    char ch='A';

    printf("Enter the Number of Row :");
    scanf("%d",&iRow);

    printf("Enter the Number of Column :");
    scanf("%d",&iCol);

    for(i=1;i<=iRow;i++)
    {
        ch='A';
        for(j=1;j<=iCol;j++)
        {
            if(j==1 || i==5 || j<=((i*2)-1))
            {
                printf("%c\t",ch); 
                j>=i ? ch--:ch++;  
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