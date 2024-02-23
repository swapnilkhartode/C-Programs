// SWap numbers by using 3 rd variable.

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,*ptr,*ptr1,temp;
    printf("Enter the value of A and B respectively\n\n");
    scanf("%d %d",&a,&b);
    // 5 10
    

    printf(" \nValues of A & B before Swapping \n\n");
    printf("%d %d",a,b);  // 


    printf("\n Values of A & B after Swapping \n\n");
    
    temp=a;
    ptr=&temp;
    a=b;
    b=*ptr;


    printf("%d %d",a,b);
     
    return 0;

}




