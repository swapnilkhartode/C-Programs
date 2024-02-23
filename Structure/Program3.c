// Write a menu driven program;

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct library
{
    int id,price;
    char bookname[90],authorname[90];
    
};


int main()
{
    int choice;
    struct library lb[1][1];
    int len=sizeof(lb)/sizeof(lb[0]);
    char ch;
    int z=0;
    int temp;

    

    do
    {
        printf("1: Add book information \n");
        printf("Display book information\n");
        printf("List of all books of given author\n");
        printf("4:Li9st the title of specified book\n");
        printf("5:List the count of books in the library\n");
        printf("6: Enter ID and gets all information about book\n");
        printf("7:List the books in the order of accesion number \n");
        printf("8: Exit\n");

        printf("Enter the choice\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:

              
              
              printf("Enter bookname and authorname, id , price respectively\n");
              for(int i=0;i<len;i++)
              {
                for(int j=0;j<len;j++)
                {
                    scanf("%s %s %d %d",&lb[i][j].bookname,&lb[i][j].authorname,&lb[i][j].id,&lb[i][j].price);

                }
                
              }
              if(z>=1)
              {
                len=len + z;
              }
              z++;
              
              break;

            case 2 :
               printf("Display Book information\n\n");
               printf("id\tbookname\tauthorname\tprice\n");

               for(int i=0;i<len;i++)
              {
                    for(int j=0;j<len;j++)
                    {
                        printf("%d\t%s\t\t%s\t\t%d\n",lb[i][j].id,lb[i][j].bookname,lb[i][j].authorname,lb[i][j].price);


                    }
              }
               
             break;

            case 3 :
               printf("List Of all authors only\n\n");
              

               for(int i=0;i<len;i++)
               {
                    for(int j=0;j<len;j++)
                    {
                        printf("%s\n",lb[i][j].authorname);

                    }
                  
               }

             break;
               
            case 4:

               printf("List the title of specified book\n\n");
               printf("Please enter the id of book which you needed\n");

               int No;
               scanf("%d",&No);
               int x,y;

                for(x=0;x<len;x++)
                {
                    for(y=0;y<len;y++)
                    {
                        if(No==lb[x][y].id)
                        {
                            printf("%s\n",lb[x][y].bookname);
                            break;
                        }

                    }
                    
                }
                if(x==len)
                {
                  printf("ID not  Exist , Please enter correct ID\n");
                }

                break;

            case 5 :

              printf("List the count of books in the library\n\n");

             

               
              int count=0;


              for(int i=0;i<len;i++)
              {
                count++;
              }
              printf("The Count of books in the library is %d",count);

              break;


            case 6:

               int ID;

              printf("Enter the id \n");
              scanf("%d",&ID);
              for(int i=0;i<len;i++)
              {
                 for(int j=0;j<len;j++)
                 {
                    if(ID==lb[i][j].id)
                    {
                         printf("%s\t%s\t%d\n",&lb[i][j].bookname,&lb[i][j].authorname,&lb[i][j].price);
                    }

                  }
                
              }

              break;

            case 7:
                printf("List the books in the order of accession number\n");
                

               

                for(int k=0;k<len;k++)
                {
                    printf("%s\n",&lb[k][0].bookname);
                }
                
                break;

            case 8 :
              printf("EXIT\n");
              return 0;

            default :

               printf("Wrong choice\n");
    
        }

        printf("Do you Want to continue\n");
        scanf("%c",&ch);
        ch=getch();
        
    } while (ch=='y' || ch=='Y');


    return 0;
    


}