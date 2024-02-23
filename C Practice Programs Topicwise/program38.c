#include<stdio.h>

 int DisplayTable(int iNo)
 {

  //  5 * 1
  //  5 * 2
   //  5 * 3
 //  5 * 4
  //  5 * 5
   //  5 * 6
    //  5 * 7 
     //  5 * 8
      //  5 * 9
       //  5 * 10







     int iCnt = 0 ;
     
     printf("__________________________________\n");

      printf("the table of %d is:\n",iNo);
      printf("_______________________________\n");




     for(iCnt= 1; iCnt<=10 ;iCnt++)
     {
       printf("%d\n",iNo * iCnt);

       printf("___________________________________\n");

     }
     


 }




int main()
{

 int iValue= 0;
 int iRet = 0;

 printf("Enter the number \n");
 scanf("%d",&iValue);

 iRet=  DisplayTable(iValue);


    return 0;

}