#include<stdio.h>
#include<stdbool.h>


bool CheckPallindrome(int iNo)
{
    int iDigit = 0,iRev = 0;
    int iTemp = iNo ;

    
    for(;iNo !=0;)      //for(;;)
    {
        iDigit = iNo %10;
        iRev =(iRev * 10)+iDigit;
        iNo = iNo /10;

    }

    if(iRev==iTemp)
    {
        return true;

    }

    else 
    {
        return false;

    }
    
}

int main()
{
  int iValue  = 0 ;
  int bRet = false;

  printf("please enter number:\n");
  scanf("%d",&iValue);

  bRet = CheckPallindrome(iValue);





  if(bRet==true)
  {
    printf("%d number is pallindrome\n",iValue);

  }

  else
  {
    printf(" %d  number is not pallindrome\n",iValue);

  }






    return 0;

}