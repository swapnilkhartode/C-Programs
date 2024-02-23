// To Acess CRED programs

#include<stdio.h>

int main()
{
    int XX;

    printf("Enter the credit score :\n");
    scanf("%d",&XX);

    if(XX > 0 && XX <= 1000)
    {
        if(XX >=750)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }
    else
    {
        printf("Invalid Data");
    }

    return 0;
}