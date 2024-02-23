//accept string from user and convert all letters into toggle 
//case

#include<stdio.h>
//#include<string.h>


void strToggleX(char *str)
{
 while(*str!='\0')
 {
    if((*str>='A')&&(*str<='Z'))
    {
       *str = *str + 32;
    }

    else if((*str>='a')&&(*str<='z'))
    {
       *str = *str - 32;
    }
   str++;

 } 
 


}


int main()
{

  char arr[30];

  printf("Enter the string\n");
  scanf("%[^'\n']s",&arr);

  strToggleX(arr);     // strlwrX(100);

  printf("String after conversion is : %s\n",arr);

 return 0;
}