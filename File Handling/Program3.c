// WAP in c to write multiple lines  to a text file.
#include<stdio.h>
int main()
{
    FILE *fptr;
    char str[100];
    int i=0;
    for(i=0;i<=5;i++)
    {
          fgets(str,sizeof str,stdin);
          fputs(str,fptr);     // fputs(char *str,FILE *fptr) str: this is an array containing null terminating sequence of characters to be written.
                               // fptr= this is a pointer to FILE object that indentifies the fptr where the string is to be written.
    }
    
    //fptr=fopen("XYZ.txt","r");

    if(fptr==NULL)
    {
        printf("File does not exist\n");
        return 0;
    }
   
     
    while((fgets(str,100,fptr)))
    {
        printf("%s",str);
    }

    fclose(fptr);
}
