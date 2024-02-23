#include<stdio.h>
#include<stdbool.h>

bool DivisibleByThreeAndFive(int iNo)
{
 if((iNo %3 ==0) )
 {
    if(iNo %5==0)
    {

   return true;

    }
    else
    {
        return false;
        
    }

 }
 else 
 {
   return false;

 }

}

int main()
{
 int iValue=0;
 bool bret=false;



 printf("Enter Number:\n");
 scanf("%d",&iValue);

 bret=DivisibleByThreeAndFive(iValue);
 if(bret==true)
 {
    printf("the number is divisible by 3 and 5\n");

 }
 else
 {
    printf("Number Is not divisible by 3 or 5\n");

 }

    return 0;

}