#include<stdio.h>

int countalphabets(char str[])
{
    int count=0,i;

    for(i=0; str[i] != '\0' ; i++)
    {
         if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
         {
            count++;
         }
    }
    return count;
}
int main()
{
    char str[20];
    
    printf("Enter the String\n");
    gets(str);

    int result = countalphabets(str);

    printf("Total number of alphabets in given string is : %d",result);

    return 0;
}