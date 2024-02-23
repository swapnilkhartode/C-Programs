#include<stdio.h>
int main()
{
    FILE *fptr;

    // Open a file in read mode
    fptr = fopen("ABC.txt","r");

    // Store the content of the file
    char myString[100];
}

/*

in order to read the content "filename.txt", we can use the fgets() function.
the fgets() function takes 3 parameters :
  1-> Where to store the file content (myString array);
  2-> the maximum size of data to read , which should match the size of myString(100).
  3-> it requires a file pointer that is used to read the file(fptr).
*/