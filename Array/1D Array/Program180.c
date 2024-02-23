// SWap numbers by with and without using 3 rd variable.

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,*ptr,*ptr1;
    printf("Enter the value of A and B respectively\n\n");
    scanf("%d %d",&a,&b);
    // 5 10
    



    printf(" \nValues of A & B before Swapping \n\n");
    printf("%d %d",a,b);  // 


    printf("\n Values of A & B after Swapping \n\n");
    ptr=&a;
    ptr1=&b;
    *ptr= abs(*ptr) - abs(*ptr1); // 10
    *ptr1 = *ptr + *ptr1;
    *ptr=*ptr1 - *ptr;

    // 10
    a=*ptr;
    b=*ptr1;

    

    printf("%d %d",a,b);
     
    return 0;

}




