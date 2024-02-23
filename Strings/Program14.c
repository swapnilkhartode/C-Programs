// Sort the characters of string in descending  order

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char str[90],temp;
    printf("Enter the string\n");
    fgets(str,sizeof str,stdin);
    int len= strlen(str);

    for(int i=0;i<len-1;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(str[i] < str[j])
            {
               temp=str[i];
               str[i]=str[j];
               str[j]=temp;
            }
        }
    }

    printf("Print string after sorting is : %s\n",str);
    return 0;
}