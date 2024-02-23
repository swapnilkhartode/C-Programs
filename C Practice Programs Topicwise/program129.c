#include<stdio.h>
#include<stdbool.h>

bool IsUpperx(char ch)
{

    if((ch>=65) && (ch<=90))       //if((ch>=97)  && (ch<=122)
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
 int bRet = IsUpperx(cvalue);
 if(bRet==true)
 {
    printf("%c is uppercase letter\n",cvalue);

 }
 else
 {
    printf("%c is not a uppercase letter\n",cvalue);
 }














    return 0;
}