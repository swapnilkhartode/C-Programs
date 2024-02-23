#include<stdio.h>
#include<stdbool.h>

bool checksmall(char ch)
{

    if((ch>='a') && (ch<='z'))       //if((ch>=97)  && (ch<=122)
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
 int bRet = checksmall(cvalue);
 if(bRet==true)
 {
    printf("%c is small case letter\n",cvalue);

 }
 else
 {
    printf("%c is not a small letter\n",cvalue);
 }














    return 0;
}