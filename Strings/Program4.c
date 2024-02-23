// Wap in c to separate indivisual characters from string.
/* 
i/p=Swapnil

O/p= S w a p n i l

*/
#include<stdio.h>
#include<stdlib.h>
char SepChar(char A[])
{
    int i=0;
    printf("The output is : \n");
    while(A[i] != '\0')
    {
        printf("%c ",A[i]);
        i++;
    }
}

int main()
{

    char str[90];

    printf("Enter the String\n");
    fgets(str,sizeof str,stdin);
    SepChar(str);


}

