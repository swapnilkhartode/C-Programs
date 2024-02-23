// WAP in c to read an existing file.
#include<stdio.h>
int main()
{
    FILE *fptr;
    char str[100];
    
    
    fptr=fopen("XYZ.txt","r");

    if(fptr==NULL)
    {
        printf("File does not exist\n");
        return 0;
    }
    fprintf(fptr,"Hello World !");
     
    while((fgets(str,100,fptr)))
    {
        printf("%s",str);
    }

    fclose(fptr);
}
