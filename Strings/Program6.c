// WAP in c to count the total number of words in a string.

// WAP in c to find the length of a  string without using library function.
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char str[50];                      // Declaration of string.
    printf("Enter the String\n");
    fgets(str,sizeof str,stdin);       //Get string from user
    int i=0,l=0;
    while(str[i] != '\0')
    {
        if(str[i]==' ' && str[i+1]!=' ') // When you press whitespace in the string then it will not considered as a word.
        {
            l++;
        }
        i++;
    }
    printf("The Total number of words in the string is : %d\n",l);

    return 0;
}