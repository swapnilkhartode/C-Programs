#include<stdio.h>
int main()
{
    char str1[20],str2[20];
    char *ptr=str1;
    char *reverse=str2;
    int i=0;

    printf("Enter the string\n");
    fgets(str1,sizeof str1,stdin);

    while(*ptr!='\0')
    {
        ptr++;
        i++;
    }

    while(i>=0)
    {
        ptr--;
        *reverse=*ptr;
        reverse++;
        --i;
    }
    *reverse='\0';

    printf("Reverse of the string is %s\n",*reverse);

}