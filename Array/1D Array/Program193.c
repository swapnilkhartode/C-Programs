// WAP to print all possible combinations of r elements in a given arrray.

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int arr[5],i,j,r,count=0,k=0,m=0,comb,n,fn,fk,fnk,l=0,u,t;

    int len = sizeof(arr)/sizeof(arr[0]);
    printf("Enter the combination of how much elements :\n");
    scanf("%d",&r);
    m=len-1;
    
   
    n=len;
    k=r;
    u=abs(n-k);
    fn=tgamma(n+1);
    fk=tgamma(k+1);
    fnk=tgamma(u+1);


    comb=(fn /(fk*(fnk)));
    

    printf("Enter the elements in a array a:");
    for(i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);
    }
    


    printf("The combinations are :\n");

    
         for(i=0;i<len;i++)
         {
            if(l==comb)
            {
                break;
            }
            for(j=0;j<r+1;j++)
            {
                if(j==m)
                {
                    continue;
                    
                }
                if(i==(len-(t+1)))
                {
                    printf("%d ",arr[j]);

                }

                
            }
            m--;
            printf("\n");
            l++;
            
         }

   


}