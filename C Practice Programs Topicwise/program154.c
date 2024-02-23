

#include<stdio.h>
//#include<string.h>


int CountSpace(char *str)
{
    int iCnt = 0;
 while(*str!='\0')
 {
    if(*str==' ')
    {
        iCnt++;
    }
    str++;
 } 
 return iCnt;
 


}


int main()
{

  char arr[30];
  int iRet = 0;

  printf("Enter the string\n");
  scanf("%[^'\n']s",&arr);

  iRet = CountSpace(arr);     // strlwrX(100);

  printf("Number of white spaces are : %d\n",iRet);

 return 0;
}