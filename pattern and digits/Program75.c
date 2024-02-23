// JAR full of candies
// N -- No of candies available,  K - Minimum number of candies that must be inside Jar

#include<stdio.h>

int main()
{
    int M,N=10;
    int K =5;

    printf("Enter the number of purchased candies : ");
    scanf("%d",&M);



    if(M > K && M<=N)
    {
        printf("Sorry !!  You Only purchase the candies <= minimum limit\n ");
        printf("Number of candies left : %d\n",N);
    }
    else if(M <= K )
    {
        printf("Number of candies sold : %d\n",M);
        printf("Number of candies Available : %d\n",N-M);
        N = N+M;
    }
    else
    {
        // M ==0 || M >= N
        printf("INVALID INPUT\n");
        printf("Number of candies left : %d\n",N);

    }



}