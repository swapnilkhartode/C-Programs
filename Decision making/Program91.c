#include<stdio.h>
int main()
{  
    int num;
    printf("enter a number\n");
    scanf("%d",&num);
     

     switch(num%2==0)
     {   
        case 1:
        printf("number is even\n");
        break;
        case 0:
        printf("number is odd\n");
        break;

        default:
        printf("wrong input");


     }
     return 0;
}

   