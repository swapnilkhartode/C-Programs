// WAP in c to write multiple lines  to a text file.
#include<stdio.h>
int main()
{
    FILE *fptr;
    char str[100];
    int i=0;
    
    fptr=fopen("XYZ.txt","w");
    fprintf(fptr,"swapnil\nHello everybody\nHello everybody");
    fclose(fptr); // write kelyavr parat fclose karane

    if(fptr==NULL)
    {
        printf("File does not exist\n");
        return 0;
    }
   //----------------------------------------**************READ THE FILE*************--------------------------
    fptr=fopen("XYZ.txt","r");
    
    while((fgets(str,100,fptr)))
    {
        printf("%s",str);
    }

    fclose(fptr);
}
