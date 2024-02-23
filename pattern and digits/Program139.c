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
        count=1;
        flag=1;
        
        for(j=1;j<=iCol;j++)
        {
            
            if(((j==6-i || j==4+i) || i==5) && flag)
            {
                (i<=4 && j>=6) ? printf("%d",i) : printf("%d",count++);
                
                flag=0;
            }
            else
            {
                printf(" ");

                flag=1;
            }  
        }
        printf("\n");
    }

    return 0;

}

