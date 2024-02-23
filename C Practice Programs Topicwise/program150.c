//Toggle Case

#include<stdio.h>

 char CharToggleX(char ch)
 {
    if((ch>='A')&&(ch<='Z')) 
    {
     return ch+32;

    }
    else if((ch>='a')&&(ch<='z'))
    {
        return ch-32;
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

 cRet = CharToggleX(cValue);

 printf("toggled character is:%c\n",cRet);


    return 0;
}