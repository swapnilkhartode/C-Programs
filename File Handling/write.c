// Write to a file

#include<stdio.h>

int main()
{
    FILE *fptr;
    // open the file in writing mode
    fptr=fopen("ABC.txt","w");

    // Write some text to the file
    fprintf(fptr,"gghhhu");
    printf("Data succesfully write\n");

    // Close the file
    fclose(fptr);

}
/*
 Note : If you write to a file that already exists , the old content in a file is deleted and the new content is inserted.

 The "w" mode means that file is opened for writing.
 to insert content to it , you can use the fprintf() function and add the pointer variable (fptr ) and some text
*/