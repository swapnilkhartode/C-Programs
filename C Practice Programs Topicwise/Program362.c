#include<stdio.h>

int StrlenI(char *str)
{
    int iCnt=0;
    while((*str != '\0'))
    {
        iCnt++;
        str++;
    }
    return iCnt;
}
int main()
{
 char Arr[20];
 int iRet=0;

 printf("Enter string:\n");
 scanf("%[^'\n']s",Arr);

 iRet  = StrlenI(Arr);
 printf("string length is: %d\n",iRet);





    return 0;
}