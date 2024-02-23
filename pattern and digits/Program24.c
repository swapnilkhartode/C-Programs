// WAP to swap the two number  using third variable.

#include<stdio.h>
#include<math.h>

int main()
{
    int a,b ,temp;

    printf("Enter the number a and b: \n");
    scanf("%d %d",&a, &b);

    temp =a;
    a=b;
    b=temp;

    

    printf("The Swap of Given number is : %d  %d\n",a,b);

    return 0;



    
}