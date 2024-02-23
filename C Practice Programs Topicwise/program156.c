//accept string from user and count white spaces

#include<stdio.h>
//#include<string.h>

void strcpyX(char *src , char *dest)
{
  while(*src!='\0')
  {
   *dest = *src;



    src++;
    dest++;
  }
  *dest = *src;




}

int main()
{

  char arr[30];
  char brr[30];

  printf("Enter the string\n");
  scanf("%[^'\n']s",arr);

  strcpyX(arr,brr);   //strcpyX(100,200);

  printf("Copied string is :%s",brr);
 
 
  

 return 0;
}