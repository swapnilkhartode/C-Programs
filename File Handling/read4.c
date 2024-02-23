/*
if you try to open a file for reading that does not existthe fopen() function will return NULL.
As a good practice , we can use an "if" statement to test for NULL, and print some text instead the file does not exist
*/

#include<stdio.h>

int main()
{
    FILE *fptr;
    //Open the file
    fptr=fopen("xyz.txt","r");

    // print some text if the file does not exist
    if(fptr==NULL)
    {
        printf("Not able to open the file\n");
    }

    //close the file
    fclose(fptr);

}