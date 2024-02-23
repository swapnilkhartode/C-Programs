// Wap to perform following operations using function.

#include<stdio.h>

int calAdd(int No1, int No2)
{
    printf("\n The Sum of %d and %d is : ",No1,No2);
    int sum=0;
    sum=No1 + No2;

    return sum;

}

int calSub(int No1, int No2)
{
    printf("\n The Subtraction of %d and %d is : ",No1,No2);
    int sub=0;
    sub= No1 - No2;
    
    return sub;
}

int calMult(int No1, int No2)
{
    printf("The Multiplication of %d and %d is : ",No1,No2);
    int Mult=1;
    Mult=No1 * No2;

}

int calDiv(int No1, int No2)
{
    printf("The Division  of %d and %d is : ",No1,No2);
    int Div=0;
    Div = No1/No2;

    return Div;

}
 
int calMod(int No1, int No2)
{
    printf("The Remainder of %d and %d is : ",No1,No2);
    int rem=0;
    rem= No1 % No2;

    return rem;

}

int main()
{
    int a,b,iRet=0;
    
    
    printf("Enter the value of a & b :");
    scanf("%d%d",&a,&b);

    iRet=calAdd(a,b);
    printf("%d\n",iRet);

    iRet=calSub(a,b);
    printf("%d\n",iRet);

    iRet=calMult(a,b);
    printf("%d\n",iRet);

    iRet=calDiv(a,b);
    printf("%d\n",iRet);

    iRet=calMod(a,b);
    printf("%d\n",iRet);


    return 0;



}