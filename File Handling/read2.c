#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *fptr;

    // Open a file in a read mode
    fptr = fopen("ABC.txt","r");

    // store the content of file in other string for backup.
    char myString[100];

    // read the content and store it inside myString
    fgets(myString,100,fptr);

    // Print the file content
    printf("%s",myString);

    // Close the file
    fclose(fptr);
}

/*
Note : The fgets function only reads the first line of the file. if you remember, there were two lines of the text in "filename.txt"
to read every line of the file , you can use a while loop:
*/