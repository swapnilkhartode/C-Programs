// Full  pyramid

#include<stdio.h>

int main()
{
    int i,j,iRow,iCol,flag=0,count=0;

    printf("Enter the Number of Row :");
    scanf("%d",&iRow);

    printf("Enter the Number of Column :");
    scanf("%d",&iCol);

    for(i=1;i<=iRow;i++)
    {
        
        flag=1;
        
        for(j=1;j<=iCol;j++)
        {
            
            if(((j==10-i || j==8+i) || i==5) && flag)
            {
                printf("%d",i);
                
                flag=0;
            }
            else
            {
                printf("*");

                flag=1;
            }  
        }
        printf("\n");
    }

    return 0;

}

