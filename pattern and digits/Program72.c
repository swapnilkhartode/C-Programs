// WAP to check Uppercase  and lowercase

#include<stdio.h>

int main()
{
    char ch;

    printf("Enter the character :\n");
    scanf("%c",&ch);

    if(ch >= 'A' && ch <= 'Z')
    {
        printf("The chaeracter is Uppercase");
    }
    else
    {
        printf("The character is Lowercase");
    }
}