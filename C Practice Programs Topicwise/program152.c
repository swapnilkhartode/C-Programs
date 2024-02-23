//accept string from user and convert all small letters 
//into capital letters

#include<stdio.h>
//#include<string.h>


void strUprX(char *str)
{
 while(*str!='\0')
 {
    if((*str>='a')&&(*str<='z'))
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

  strUprX(arr);     // strlwrX(100);

  printf("String after conversion is : %s\n",arr);

 return 0;
}