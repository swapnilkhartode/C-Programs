#include<stdio.h>
int main()
{
    char ch;
    printf("enter a   aplhabet\n");
    scanf("%c",&ch);

    if(ch>=65 && ch<=90)
       {
        ch=ch+32;
       }
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("character is voewl\n");

        break;

        default:
        printf("character is consonant");

    }






    return 0;
}