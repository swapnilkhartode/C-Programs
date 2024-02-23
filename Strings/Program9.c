// WAP in c to compare two strings without using string library functions with using function(*ch1 , *ch1).

// this program is not case sensative 

#include<stdio.h>
#include<stdlib.h>

int CheckString(char* s1, char* s2)
{
    int flag=0;
    int L1=0,L2=0;
    while(*s1 != '\0')
    {
        s1++;
        L1++;
    }
    L1=L1-1;

    while(*s2 != '\0')
    {
        s2++;
        L2++;
    }
    L2=L2-1;

    s1=s1-L1; // then we set the pointer to the first alphabet of string.
    s2=s2-L2;
    
    if(L1 != L2)
    {
        flag=1;
    }
    else
    {
        while(*s1 !='\0')
        {
            if(*s1 != *s2)
            {
                
                 flag=1;
                 break;
            }
            s1++;
            s2++;
        }
       
    }
    return flag;
}

int main()
{
    char str1[50],str2[50];                      // Declaration of string.
    int iRet=0;

    printf("Enter the First String\n");
    fgets(str1,sizeof str1,stdin);       //Get string from user
    printf("Enter the second String\n");
    fgets(str2,sizeof str2,stdin);
    iRet=CheckString(str1,str2);
    if(iRet==0)
    {
        printf("Strings are Equal");
    }
    else
    {
        printf("Strings are not equal\n");
    }
    return 0;
    
}