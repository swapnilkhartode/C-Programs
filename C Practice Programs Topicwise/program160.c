//Reverse the string 

#include<stdio.h>
void strrevX(char *str)
{
  char *start = str;
  char *end  = str;
  char temp = '\0';

 while(*end!='\0')
 {
    end++;
 }
 end--;

 while(start<end)
 {
    temp = *start;
    *start  = *end;
    *end = temp;

    start++;
    end--;

 }
  



}

int main()
{

  char arr[30];
  char brr[30];

  printf("Enter the string\n");
  scanf("%[^'\n']s",arr);

  strrevX(arr);

  printf("Reverse string is :%s\n",arr);

 

 
 
  

 return 0;
}