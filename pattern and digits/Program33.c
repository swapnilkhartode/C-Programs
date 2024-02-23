// Write a program to check whether character is an alphabet or integer value or special symbol using conditional operator.

#include<stdio.h>

int main()
{
    char ch;

    printf("Enter the character or alphabet or integer : \n");
    scanf("%c",&ch);

    ((ch >= 'a' && ch <= 'z') ||  (ch >= 'A' && ch <= 'Z')) ? (printf("it is an Alphabet ")) : 

    ((ch >= 48) && ( ch <= 57 )) ? (printf("it is an integer")) :(printf("it is a Special character"));

    return 0;

} 