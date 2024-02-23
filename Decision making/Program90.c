#include<stdio.h>
int main()
{  
    int num1,num2;
    printf("enter a number1 and number2\n");
    scanf("%d%d",&num1,&num2);
     

     switch(num1>num2)
     {   
        case 0:
        printf("number 2 is maximum\n");
        break;
        case 1 :
        printf("number 1 is maximum\n");
        break;

        default:
        printf("wrong input");


     }

   
   
   
   
   
   
    return 0;

    
}