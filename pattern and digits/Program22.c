// WAP to swap the two number  without using third variable.

#include<stdio.h>
#include<math.h>

int main()
{
    int no,First,Last, swap;

    printf("Enter the number : \n");
    scanf("%d",&no);

    First = no%100;  // 34
    
    Last = no/100;   //12

    swap = (First*100) + (Last*1);

    printf("The Swap of Given number is : %d\n",swap);

    return 0;



    
}