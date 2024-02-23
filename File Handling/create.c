#include<stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("ABC.txt","w");   // if you create file in absolute in a specific folder, just provide an absolute path.
    fclose(fptr);                // fopen("C:\directoryname\filename.txt","w");
    printf("File is created");
    return 0;

}
/* 
 if you not give the adress in filename , the file is create in same directory as your other c files .
 The "w" mode is used to write a file . however if the file is does not exist, it will create the file.
 FILE is a basically data type , and we need to create a variable to work with it (fptr).
 to actually open a file, use the fopen() function, which takes two parametrs:
         1-> filename: the name of the actual file you want to open (or create) eg. filename.txt;
         2-> mode : A single character which reperesent what you want to do with the file(read,write,or append).
           w -  Writes to a file.
           a - Appends new data to a file.
           r - Reads from a file.

 */

/*
closing the file :- fclose() function
   1-> this will close the file when we are done with it.
   2-> it is considered as good practice , because it makes sure that :

       a) changes are saved properly
       b) other programs can use the file (if you want)
       c) clean up unnecessary memory space
*/ 
