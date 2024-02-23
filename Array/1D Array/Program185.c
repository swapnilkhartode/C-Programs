// Move all zeros to end

#include<stdio.h>
int main()
{
    int arr[5],i,j=0;
    int len = sizeof(arr)/sizeof(arr[0]);

    printf("Enter the elements in array :\n");
    for(i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);    
    }
    printf("\n");
   for(i=0;i<len;i++)
   {
      if(arr[i] !=0)
      {
        arr[j]=arr[i];
        j++;  
      } 
   } 

   for(j;j<len;)
   {
      arr[j]=0;
      j++;
   }
   printf("\n\n\n the last zero array is ");
   for(i=0;i<len;i++)
   {
      printf("%d\t",arr[i]);
   }

   return 0;
}