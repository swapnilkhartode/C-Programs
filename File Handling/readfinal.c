#include<stdio.h>

int main()
{
    FILE *fptr;
    //Open the file
    fptr=fopen("ABC.txt","r");

    //Store the content of the file
    char myString[100];


    // print some text if the file does not exist
    if(fptr==NULL)
    {
        printf("Not able to open the file\n");
    }
    else
    {
        while(fgets(myString,100,fptr))
        {
            printf("%s",myString);
        }
    }

    //close the file
    fclose(fptr);
}