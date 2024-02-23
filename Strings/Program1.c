// Accept string from user and print it.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char str[50];
    printf("Enter the String\n");
    fgets(str,sizeof str,stdin); // Accept string from user

    printf("The String you entered is :%s\n",str);

    return 0;
}