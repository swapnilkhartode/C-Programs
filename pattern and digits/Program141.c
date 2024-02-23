#include<stdio.h>

int main()
{
    int i,j,No,flag=1;

    printf("Enter the number : \n");
    scanf("%d",&No); //24

    for(i=2;i<=(No/2);i++)
    {
        if(No%i ==0)
        {
           flag=1;
           for(j=2;j<=(i/2);j++)
           {
                if(i%j==0)
                {
                    flag=0;
                    break;
                }
           }
           if(flag==1)
           {
            printf("%d\t",i);
           }
        }
       
    }

    return 0;
}