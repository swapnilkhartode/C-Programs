////////////////////////////////////////////////////////////////////////////////
///////////  steps to follow  while programming 
//////////////////////////////////////////////////////////////////////


//step 1   understand the problem statement 
// step 2    write th algorithm
// step 3     decide the programming language 
//  step 4    write the program 
//  step 5     test the program


/////////////////////////////////////////////////////////////////////////
//  problem statement :Accept number from user and check whether it si divisible by 
//   5 or not 

//input :23
//output :23 is not divisible by 5
//
//input :25
//output : 25 is divisible by 5
//
//input :  -20
//output: -20  is divisible by 5

/////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////
//  Algorithm 
///////////////////////////////////////////////////////////////////

/*
START 
    Accept number from user as No
    Divide that No by 5 and check the value of remaider  
    If the value is 0 
      Them display as No is divisible by 5
    Otherwise 
       display as No is not divisible by 5

END
*/
///////////////////////////////////////////////////////////////////////



////////////////////////////////////////////////////////////////

#include<stdio.h>


//////////////////////////////////////////////////////////////////
//  Function Name :  DivisibleByFive
//  Description :   To check whether input is divisible by 5 or not
//  Input :      integer
//  Output:     integer
//  Author:    Darappa Siddharam Badole
//  Date :     
//
//////////////////////////////////////////////////////////////////
int DivisibleByFive(int iNo)
{
  int iAns=0;
  iAns=iNo % 5;

  if (iAns!=0)
  {
   
   return 0;

  }
 else 
   {

    return 1;

   }


}
/////// Entry point function //////////////////////////////////

int main()
{
int iValue =0;
int iRet =0;

printf("Enter Number :\n");
scanf("%d",&iValue);

iRet=DivisibleByFive(iValue);
if(iRet!=0)
{
  printf("the number is not disible by five\n",iValue);


}
else
{
printf("the number is divisible by 5\n",iValue);

}



    return 0;

}

////////////////////////////////////////////////////////////////
//     Result 
//
//
//
//
/////////////////////////////////////////////////////////////////

