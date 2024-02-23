// WAP to to delete an element at desired position from an array.

#include<stdio.h>
int main()
{
   int a[5],i,iPos;
   int len = sizeof(a)/sizeof(a[0]);
   
   for(i=0;i<len;i++)
   {
      scanf("%d",&a[i]);
   }

   printf("Enter the position which want to delete :\n");
   scanf("%d",&iPos);

   printf(" the elemnts  an array :\n");
   for(i=0;i<len;i++)
   {
      if((iPos-1)==i)
      {
         continue;
      }
      printf("%d\t",a[i]);
   }
   return 0;
}