// print the string in reverse.
#include<stdio.h>
#include<stdlib.h>
char ReverseString(char ch[])
{
    int i=0,len=0;
    char temp;
    while(ch[i]!='\0')
    {
        i++;
        
    }
    len=i-1;
    i=0;
    while(i < len/2)
    {
        temp=ch[i];
        ch[i]=ch[len-i];
        ch[len-i]=temp;
        i++;  
    }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
    printf("The Reverse String is :");
    printf("%s",ch);
}
int main()
{
    char str[90];
    printf("Enter the string\n");
    fgets(str,sizeof str,stdin);
    ReverseString(str);
}