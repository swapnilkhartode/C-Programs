#include<stdio.h>
int main()
{
    int i,j,Limit,counter=0;

    printf("Enter the limit :");
    scanf("%d",&Limit);

    for(i=2;i<Limit;i++)
    {
        counter=0;
        for(j=1;j<=(i/2);j++)
        {
            if(i%j ==0 )
            {
                counter++;
            } 
        }
        if(counter == 1)
        {
            printf("%d\t",i);
        }
    }

    return 0;
}