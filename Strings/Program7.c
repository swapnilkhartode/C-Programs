// WAP in c to compare two strings without using string library functions.
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char str1[50],str2[50];                      // Declaration of string.
    int flag=0;
    printf("Enter the First String\n");
    fgets(str1,sizeof str1,stdin);       //Get string from user

    printf("Enter the second String\n");
    fgets(str2,sizeof str2,stdin);
    int L1=0,L2=0;
    while(str1[L1] != '\0')
    {
        L1++;
    }
    L1=L1-1;

    while(str2[L2] != '\0')
    {
        L2++;
    }
    L2=L2-1;

    if(L1 != L2)
    {
        printf("Strings are not Equal\n");
    }
    else
    {
        int i=0;
        while(str1[i] !='\0')
        {
            if(str1[i] != str2[i])
            {
                 flag=1;
                 break;
            }
            i++;
        }
        if(flag==0)
        {
            printf("Strings are Equal");
        }
        else
        {
            printf("Strings are not equal\n");
        }
    }
}