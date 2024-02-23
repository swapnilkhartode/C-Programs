// WAP in c to compare two strings without using string library functions with using function(*ch1 , *ch1).
#include<stdio.h>
#include<stdlib.h>

int CheckString(char* s1, char* s2,int L1,int L2)
{
    

    int flag=0;
    
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

    iRet=CheckString(str1,str2,L1,L2);
    printf("%d iRet is ",iRet);
        if(iRet==0)
        {
            printf("Strings are Equal");
        }
        else
        {
            printf("Strings are not equal\n");
        }
    
}