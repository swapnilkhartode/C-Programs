// WAP to check whether an alphabet is vowel or consonant.

#include<stdio.h>

int main()
{
    char ch;

    printf("Enter the alphabet :\n");
    scanf("%c",&ch);

   (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' ||ch == 'u' || ch == 'A' ||ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ) ? printf("The given alphabet is Vowel."):printf("The given alphabet is Consonant.");
    
    //(ch=='a' || ch=='e') ? printf("The given alphabet is Vowel."): printf("The given alphabet is Consonant.");

    
   //((ch ='a' )||( ch ='e' )) ? printf("The given alphabet is Vowel."):printf("The given alphabet is Consonant.");
    
    return 0;
}




