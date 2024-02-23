// WAp to separate odd and even integers in separate array 

#include<stdio.h>
int main()
{
   int i=0,No,j=0,k=0;
   
   printf("Enter the number of elements :\n");
   scanf("%d",&No);

   int a[No],Err[No],Orr[No];
   
   printf("Enter the elemnts  an array :\n");
   for(i=0;i<No;i++)
   {
      scanf("%d",&a[i]);

      if(a[i] % 2 ==0)
      {
         Err[j]=a[i];  // 1 2 3 4 5 Err[i] -----> takl tr pahilyanda else madhe janar nantr i++ mhanje i=1 honar mg Err chi 1st value Err[0] yevji Err[1] asnar tyamule o/p chukel
         j++;

      }
      else
      {
         Orr[k]=a[i];
         k++;
      }
   }
   
   printf("The Even elements are :\n");
   for(i=0;i<j;i++)
   {
      printf("%d\t",Err[i]);
   }
   printf("\nThe Odd elements are : \n");
   for(i=0;i<k;i++)
   {
      printf("%d\t",Orr[i]);
   }

  
   
   return 0;
}