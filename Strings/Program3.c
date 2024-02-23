// WAP in c to find the length of a  string without using library function Using function.
#include<stdio.h>
#include<stdlib.h>

int StrLen(char A[])
{
    int i=0;
    while(A[i] != '\0')
    {
        i++;
    }
    return i;
    

}

int main()
{
    char str[50],l;                      // Declaration of string.
    printf("Enter the String\n");
    fgets(str,sizeof str,stdin);       //Get string from user
    l=StrLen(str);

    printf("The Length is : %d\n",l-1);
    

    return 0;
}