// WAP in c to create and store information in a text file.
#include<stdio.h>
int main()
{
    FILE *fptr;
    char str[100];
    
    
    fptr=fopen("XYZ.txt","w");

    if(fptr==NULL)
    {
        printf("Not able to open the file\n");
        return 0;
    }
    fprintf(fptr,"Hello World !");
     
    while((fgets(str,100,fptr)))
    {
        printf("%s",str);
    }

    fclose(fptr);
}
