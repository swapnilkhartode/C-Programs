// WAp in c to count the total number of vowels or consonants in a string.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char str1[90];
    int v=0,c=0;

    printf("Enter the String\n");
    fgets(str1,sizeof str1,stdin);
    
    int i=0;
    while(str1[i] != '\0')
    {
       if(str1[i]=='a' || str1[i]=='e' || str1[i]=='i' || str1[i]=='o' || str1[i]=='u' || str1[i]=='A' || str1[i]=='E' || str1[i]=='O' || str1[i]=='U')
       {
          v++;
       }
       else if((str1[i]>='a' && str1[i]<='z') || (str1[i]>='A' && str1[i]<='Z'))
       {
         c++;
       }
       i++;
    }

    printf("The Number of Vowels in the String is : %d\n",v);
    printf("The number of Consonants in the String is : %d\n",c);

    return 0;

}