#include<stdio.h>

 char ToLowerX(char ch)
 {
    if((ch>='A')&&(ch<='Z'))
    {
     return ch+32;

    }
    else
    {
        return ch;
    }
    
 }

int main()
{

 char cValue = '\0';
  char cRet = '\0';

 printf("ENter the character\n");
 scanf("%[^'\n']s",&cValue);

 cRet = ToLowerX(cValue);

 printf("character in the upper case is:%c\n",cRet);


    return 0;
}