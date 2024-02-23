// WAP in c to find the length of a  string without using library function.
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char str[50];                      // Declaration of string.
    printf("Enter the String\n");
    fgets(str,sizeof str,stdin);       //Get string from user
    int i=0;
    while(str[i] != '\0')
    { printf("S\n");
        i++;
    }
    printf("The Length is : %d\n",i);

    return 0;
}