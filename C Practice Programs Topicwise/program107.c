
/*

Input :  
 irows=4

 col : 4


Output : 1 $ 3 $   
         1 $ 3 $                                                                                      
         1 $ 3 $   
         1 $ 3 $  
*/
#include<stdio.h>

void PatternDisplay(int iRow,int iCol)
{ int i=0,j=0;
 for(i=1;i<=iRow;i++)
{

 for( j =1;j<=iCol;j++)
   {
       if(j%2==0)
      {

         printf("$\t");


     }
    else
    {
        printf("%d\t",j);
    }
 }
  printf("\n");

 }

}


int main()
{
int iValue1 = 0;
int iValue2 = 0;

printf("Enter the number of rows:\n");
scanf("%d",&iValue1);

printf("Enter number of colums:\n");
scanf("%d",&iValue2);


PatternDisplay(iValue1,iValue2);


return 0;
}