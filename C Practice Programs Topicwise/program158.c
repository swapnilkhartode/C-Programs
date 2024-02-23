

#include<stdio.h>
//#include<string.h>

void strcpySmallX(char *src , char *dest)
{
  while(*src!='\0')
  {
    if((*src>='A')&&(*src<='Z'))
    {
        *dest = *src+32;
    }

    else
    {
        *dest = *src;
    }
    src++;
    dest++;
  }
  *dest  = '\0';

}

int main()
{

  char arr[30];
  char brr[30];

  printf("Enter the string\n");
  scanf("%[^'\n']s",arr);

  strcpySmallX(arr,brr);   //strcpyX(100,200);

  printf("Copied string is :%s\n",brr);
  printf("Original string is %s",arr);
 
 
  

 return 0;
}