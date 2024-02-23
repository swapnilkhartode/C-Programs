// Append content to a file

#include<stdio.h>

int main()
{
    FILE *fptr;

    // Open file in append mode 
    fptr = fopen("ABC.txt","a");

    // Append some text to the file
    fprintf(fptr,"  Hi everybody !");

    // close the file
    fclose(fptr);
}

/*
Note : Just like the "w" mode; if the file does not exist, the "a" mode will create a new file with the "appended" content.
*/