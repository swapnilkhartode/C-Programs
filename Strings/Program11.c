// WAP in c to copy one string to another string.
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char str1[90],str2[90];

    printf("Enter the String\n");
    fgets(str1,sizeof str1,stdin);
    
    int i=0;
    while(str1[i] != '\0')
    {
        str2[i]=str1[i];
        i++;
    }
    printf("String succesfully copied !!!\n");
    printf("The second string is : %s",str2);
    printf("The Number of characters copied is : %d",i-1);
}