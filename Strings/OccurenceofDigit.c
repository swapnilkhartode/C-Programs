#include<stdio.h>
#include<string.h>

// To print Total number of occurence of a digit into *.

/*

str= 2593599
2 : *
3 : *
5 : * *
9 : * * *

*/
int main()
{
    char str[20];

    printf("Enter the string\n");  //  please enter the string in digits.
    gets(str);
    int count;
    int iCnt=0;

    int len= strlen(str);

    for(int i=0;i<len-1;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(str[i] > str[j])
            {
               char temp=str[i];
               str[i]=str[j];
               str[j]=temp;
            }
        }
    }

    printf("%s",str);
    for(int i=0; str[i]!='\0'; i+=count)
    {
        count=0;
         for(int j=0;str[j]!='\0';j++)
         {
            if(str[i]>='0' && str[i]<='9')
            {
                   if(str[i]==str[j])
                   {
                     count++;
                   }      
            }
         }
         iCnt=count;
         printf("\n");
          printf("%c :",str[i]);
          while(iCnt != 0)
          {
              printf("\t*");
              iCnt--;
          }
          
    }

    return 0;

}