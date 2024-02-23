// Sort the multiple strings.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int StrCmp(char x[90],char y[90])
{
    int count,flag=0,diff=0;
    while(count!=1)
    {
        diff=x[count]-y[count];
        count++;   
    }
    return diff;
}
int main()
{
    char str[25][90],temp[90];
    int n=0,flag=0,iRet=0,r=0;
    printf("Input number of  string\n");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)                // we use <= because last string is automaticaly initialise with newline character
    {
        fgets(str[i],sizeof str[i],stdin);
    }
    printf("The strings before sorting\n");
    for(int i=0;i<=n;i++)
    {
        printf("%s",str[i]);
    }
    for(int i=0;i<=n-1;i++)
    {
        for(int j=0;j<=n-1-i;j++)
        {
            r=strcmp(str[j],str[j+1]);
            if(r>0)
            {
                strcpy(temp,str[j]);
                strcpy(str[j],str[j+1]);
                strcpy(str[j+1],temp);  
            } 
        }  
    }
    printf("The strings after sorting\n");
    for(int i=0;i<=n;i++)
    {
        printf("%s",str[i]);
    }
    // strcmp(s1,s2)
    // < 0 first non-matching char has a lower value in s1 than s2
    // 0 equal strings
    // > 0 dirst non-matching char has a greater value in s1 than s2
}