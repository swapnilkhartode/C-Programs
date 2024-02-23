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
    struct library lb[3];
    int len=sizeof(lb)/sizeof(lb[0]);
    char ch;
   
    int temp;

    

    do
    {
        printf("1: Add book information \n");
        printf("2:Display book information\n");
        printf("3:List of all books of given author\n");
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
                scanf("%s %s %d %d",&lb[i].bookname,&lb[i].authorname,&lb[i].id,&lb[i].price);
              }
              
              
              break;

            case 2 :
               printf("Display Book information\n\n");
               printf("id \tbookname \tauthorname \tprice \n");

               for(int i=0;i<len;i++)
               {
                  printf("%d\t%s\t\t%s\t\t%d\n",lb[i].id,lb[i].bookname,lb[i].authorname,lb[i].price);
               }

             break;

            case 3 :
               printf("List Of all authors only\n\n");
              

               for(int i=0;i<len;i++)
               {
                  printf("%s\n",lb[i].authorname);
               }

             break;
               
            case 4:

               printf("List the title of specified book\n\n");
               printf("Please enter the id of book which you needed\n");

               int No;
               scanf("%d",&No);
               int f=0;

                for(f=0;f<len;f++)
                {
                    if(No==lb[f].id)
                    {
                        printf("%s\n",lb[f].bookname);
                        break;
                    }
                }
                if(f==len)
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
                if(ID==lb[i].id)
                {
                    printf("%s\t%s\t%d\n",&lb[i].bookname,&lb[i].authorname,lb[i].price);
                }
              }

              break;

            case 7:
                printf("List the books in the order of accession number\n");
                

                for(int i=0;i<len;i++)
                {
                    for(int j=i+1;j<len;j++)
                    {
                        if(lb[i].id > lb[j].id)
                        {
                            temp=lb[i].id;
                            lb[i].id=lb[j].id;
                            lb[j].id=temp;
                        
                        }
                    }
                }

                
              for(int i=0;i<len;i++)
              {
                   if((i+1)==lb[i].id)
                   {
                        printf("%s\n",&lb[i].bookname);

                   }
              
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
        
    } while(ch=='y' || ch=='Y');


    return 0;
    


}