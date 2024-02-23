// calculate Frequency of each digit in given number

#include<stdio.h>

int main()
{
    int No,temp,iFrequency=0,rem=0,count,i,j,r;

    printf("Enter the number : ");
    scanf("%d",&No);  // 11230
    
    for(i=0;i<=9;i++)
    {
        iFrequency=0;
        for(j=No;j>0;j=j/10)
        {
            
            r= j % 10;

            if(r==i)
            {
                iFrequency++;
            }
                 

        }
        printf("The Frequency of %d is %d \n",i,iFrequency);
                       
    }

                


        
   return 0;     

}
