// WAP to enter P,T,R and calculate Simple interest.

#include<stdio.h>

int main()
{
    int P,T,R;
    float SI=0;

    printf("Enter the Value of Principle : \n");
    scanf("%d",&P);

    printf("Enter the Value of Time Period : \n");
    scanf("%d",&T);

    printf("Enter the Value of Rate of interest : \n");
    scanf("%d",&R);

    SI = (P*T*R)/100;

    printf("The Value of simple interest is : %f\n",SI);

    return 0;


}