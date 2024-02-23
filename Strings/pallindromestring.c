#include<stdio.h>
#include<string.h>
// This application is case sensitive.
int PaldrmeString(char str[])
{
    int flag,i,count=0;
    int len=strlen(str);
    len=len-1;  // it points last element as per index
    printf("len is %d",len);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==str[len])
        {
            flag=0;
            --len;
            count++;
        }
        else
        {
            flag=1;
            break;
        }
    }
    printf(" count is %d\n",count);
    return flag;
}
int main()
{
    char str[10];

    printf("Enter the string\n");
    gets(str);

    int result=PaldrmeString(str);

    if(result==0)
    {
        printf("The given string %s is Pallindrome\n",str);
    }
    else
    {
        printf("The given string is Not pallindrome\n");
    }

    return 0;

}