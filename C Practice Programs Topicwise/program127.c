#include<stdio.h>
#include<stdbool.h>

bool IsCapitalx(char ch)
{

    if((ch>='A') && (ch<='Z'))       //if((ch>=97)  && (ch<=122)
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
 int bRet = IsCapitalx(cvalue);
 if(bRet==true)
 {
    printf("%c is uppecase letter\n",cvalue);

 }
 else
 {
    printf("%c is not a uppercase  letter\n",cvalue);
 }














    return 0;
}