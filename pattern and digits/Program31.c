// check whether number is palindrome or not
#include<stdio.h>

int main()
{
    int no,rev,first,last,middle,temp;
    
    printf("enter the number\n");
    scanf("%d",&no);

    temp = no;

    first=no % 10;  //1
    no = no / 10;   //12

    middle = no % 10;  //2
    last= no / 10;  //1

    rev= (first*100 )+ (middle*10) + (last*1);

    ( temp == rev)? (printf("Number is pallindrome")) : (printf("Number is not pallindrome"));

    return 0;
    
}