//incomplete
#include<stdio.h>

int CountFrequency(char *str,char ch)
{


    int iCnt = 0;
    while(*str!='\0')
    {
        if(*str==ch) 
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}




int main()
{

  char Arr[10];
  char cValue ='\0';
  int iRet = 0;


  printf("Please enter string\n");
  scanf("%[^'\n']s",Arr);

  printf("plese enter the character\n");
  scanf("%c",&cValue);

  
  iRet = CountFrequency(Arr,cValue);

  printf("Frequency of capital letters is:%d ",iRet) ;











    return 0;

}