#include<stdio.h>
#include<stdbool.h>

bool IsDigit(char ch)
{

    if((ch>='0') && (ch<='9'))       //if((ch>=97)  && (ch<=122)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
 char cvalue = '\0';
 printf("please enter one character\n" );
 scanf("%c",&cvalue);
 int bRet = IsDigit(cvalue);
 if(bRet==true)
 {
    printf("%c is Digit\n",cvalue);

 }
 else
 {
    printf("%c is not a Digit\n",cvalue);
 }














    return 0;
}