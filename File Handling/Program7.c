// Copy a file in another name and skip the particular line


#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fptr,*fptr1;
    
    int iCnt=0,iCnt1=0,iCnt2=0,iCnt3=0,iCnt4=0;
    char ch;
    
    fptr=fopen("XYZ.txt","w");
    fprintf(fptr,"swapnil\nHello1 everybody\nHello2 everybody\n");
     // write kelyavr parat fclose karane

    if(fptr==NULL)
    {
        printf("File does not exist\n");
        return 0;
    }

    fptr1=fopen("PQR.txt","w");
    if(fptr1==NULL)
    {
        printf("File does not exist\n");
        return 0;
    }
    fclose(fptr);
    fclose(fptr1);
   //----------------------------------------**************READ THE FILE*************--------------------------
    fptr=fopen("XYZ.txt","r");
    fptr1=fopen("PQR.txt","w");   // compulsory use this mode because copy means write operation hence "a" or "w" mode used
    ch=fgetc(fptr);
    while(ch != -1)
    {
        if(ch=='\n')
        {
            iCnt++;
        }
        if(iCnt==2)  // for skiping the lines
        {
            
             ch=fgetc(fptr);
            continue;
        }
       fputc(ch,fptr1);
       ch=fgetc(fptr);
       
    }
    printf("The File is created successfully !!!\n");
    fclose(fptr);
    fclose(fptr1);
   
}
