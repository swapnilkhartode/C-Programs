#include<stdio.h>

void DisplayBinary(unsigned int no)
{
    int Digit=0;
    while(no!=0)
    {
        Digit=no%2;
        printf("%d",Digit);
        no=no/2;
        
    }printf("\n");




}


int main()
{
 unsigned int Value=11;
 DisplayBinary(Value);
 










    return 0;
}