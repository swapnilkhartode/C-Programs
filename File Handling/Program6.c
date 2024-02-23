// WAP in c to write multiple lines  to a text file and count the words in file.
#include<stdio.h>
int main()
{
    FILE *fptr;
    char str[100];
    int iCnt=0,iCnt1=0,iCnt2=0,iCnt3=0,iCnt4=0;
    char str1;
    
    fptr=fopen("XYZ.txt","w");
    fprintf(fptr,"swapnil\nHello1 everybody\nHello2 everybody\n");
    fclose(fptr); // write kelyavr parat fclose karane

    if(fptr==NULL)
    {
        printf("File does not exist\n");
        return 0;
    }
   //----------------------------------------**************READ THE FILE*************--------------------------
    fptr=fopen("XYZ.txt","r");
    str1=fgetc(fptr);
    while(str1!= -1)
    {
        if(str1=='\0' || str1==' ' || str1=='\n')
        {
              iCnt++;
        }
        else if(str1=='a' || str1=='e' || str1=='i' || str1=='o' || str1=='u' || str1=='A' || str1=='E' || str1=='I' || str1=='O' || str1=='U') 
        {
            iCnt1++;
        }
        else if(str1>='0' && str1<='9')
        {
            iCnt2++;
        }
        else if((str1>='a' && str1<='z') || (str1>='A' && str1<='Z') )
        {
            iCnt3++;
        }
        if(str1=='\n')
        {
            iCnt4++;
        }
    

        str1=fgetc(fptr);
    }
printf("The total words in a file is %d\n",iCnt);
printf("Total no of vowels in file is %d\n",iCnt1);
printf("Total no of digits in the file is %d\n",iCnt2);
printf("Total no of consonants in the file is %d\n",iCnt3);
printf("Total no of lines in the file is %d\n",iCnt4);
    fclose(fptr);
}
