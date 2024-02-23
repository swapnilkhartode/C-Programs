// WAP in c to count the total number of alphabets,digits and special characters in a string.

#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str1[50];                      // Declaration of string.
    int Alpha=0,digits=0,SpChar=0;
    printf("Enter the First String\n");
    fgets(str1,sizeof str1,stdin);       //Get string from user
    int i=0;
    while(str1[i] !='\0')
    {
        if(('A'<= str1[i] && 'Z'>=str1[i]) || ('a'<= str1[i] && 'z'>=str1[i]))
        {
             Alpha++;
        }
        else if('0'<= str1[i] && '9'>=str1[i])
        {
            digits++;
        }
        else
        {
           SpChar++; 
        }
        i++;
    }
    printf("No of alphabets in the String : %d\n",Alpha);
    printf("No of digits in the string : %d\n",digits);
    printf("No of special characters in String : %d\n",SpChar-1);

    return 0; 
}