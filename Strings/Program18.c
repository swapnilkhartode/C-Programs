// wap which accept string from user and accept one charcter return index of last occurence of that character.

#include<stdio.h>
#include<string.h>

int LastOccurence(char crr[],char ch1)
{
    
    
    int i=0,index;
    while(crr[i] !='\0')
    {
        if(strcmp(crr[i],ch1)==0)
        {
            index=i;
        }
        i++;
    }
    return index;

}
int main()
{
    char str[90];
    char ch;
    int result;
    printf("Enter the string\n");
    fgets(str,sizeof str,stdin);

    printf("Enter the character\n");
    scanf("%c",&ch);

    result=LastOccurence(str,ch);

    if()

    printf("index of last occurence of that character %c is : %s\n",ch,result);
}
