// print all alphabets from a to z.

#include<stdio.h>

int main()
{
    char ch=97;

    while(ch >= 97 && ch<=122)
    {
        printf("%c\n",ch);
        ch++;
    }
    return 0;
}