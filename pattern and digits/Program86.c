// Pooja would like to withdraw

#include<stdio.h>

int main()
{
    float WithdrAmt;
    float CB,AmtAfrWithdw;

    printf("Enter the Current Balance : \n");
    scanf("%f",&CB);

    printf("Enter the Amount you want to withdraw :\n");
    scanf("%f",&WithdrAmt);
    
    if(((int)WithdrAmt % 5 == 0) && (CB <= 2000 && CB > 0))  // Type Casting
    {
            if(CB < (WithdrAmt+0.5))
            {
                printf("Insufficient Balance\n");
                printf("Current balance is : %0.2f\n",CB);
            }
            else if(CB > (WithdrAmt+0.5)) // else 
            {
                AmtAfrWithdw = CB - (WithdrAmt + 0.50);
            
                printf("%0.2f\n",AmtAfrWithdw);
            }
    }
    else
    {
        printf("Incorrect Withdrawal amount\n");
        printf("Current balance is : %0.2f\n",CB);
    }

    return 0;

}