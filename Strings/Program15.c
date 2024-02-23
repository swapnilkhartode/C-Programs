// Find maximum occuring character in string
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char str[90],temp;
    int count=0,iMaxFreq=0;
    printf("Enter the string\n");
    fgets(str,sizeof str,stdin);
    int len= strlen(str);

    for(int i=0;i<len-1;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(str[i] > str[j])
            {
               temp=str[i];
               str[i]=str[j];
               str[j]=temp;
            }
        }
    }
    printf("The String after sorting : %s",str);

    for(int i=0;i<len;i+=count)
    {
        count=0;
        for(int j=i;j<len;j++)
        {
            if(str[i] == str[j])
            {
               count++;
            }
            else
            {
                if(iMaxFreq==count)
                {
                    
                }
                if(iMaxFreq < count)
                {
                    iMaxFreq=count;
                    temp=str[i];
                }
                break;
               
            }
        }
    }
    printf("Max occuring character is %c and it occurs %d times\n",temp,iMaxFreq);

    
    return 0;
}