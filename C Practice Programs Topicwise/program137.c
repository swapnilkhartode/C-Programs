        
#include<stdio.h>
int strlenX(char str[])
{
  int iCnt = 0,i=0;
 
  for(i=0;i<str[i]!='\0';i++)
  {
    iCnt++;
    
  }
   return iCnt;
  
  
}

int main()
{
 char Arr[20];
 int iRet = 0;
 printf("Please Enter String\n");
 //scanf("%s",Arr);
 
 scanf("%[^'\n']s",Arr);


 iRet = strlenX(Arr);
 printf("Number of characters are %d",iRet);





    return 0;
}