#include<stdio.h>
void Togglealphabets(char str[])
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i] - 32;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i] + 32;
        }
    }
}
int main()
{
    char str[20];

    printf("Enter the string\n");
    gets(str);

    printf("String before toggle case\n");
    puts(str);

    Togglealphabets(str);

    printf("String after toggle case\n");
    puts(str);

    return 0;
}