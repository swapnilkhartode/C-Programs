#include<stdio.h>
#include<conio.h>

int main()
{
    int stack[5],value,top=-1,choice;
    int MAX = sizeof(stack)/sizeof(stack[0]);
    char ch;

    do
    {
        printf("\n1:PUSH\n");
        printf("2:DISPLAY\n");
        printf("3:POP\n");

        printf("Enter your choice\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                if(top==MAX-1)
                {
                    printf("Stack is Overflow");
                    break;
                }
                printf("Enter the value in the stack\n");
                for(int i=0;i<MAX;i++)
                {
                    top=top+1;
                    printf("Enter value in stack\n");
                    scanf("%d",&value);
                    stack[top]=value;
                }
              

              break;

            case 2 :

              if(top==-1)
                {
                    printf("Stack is underflow\n");
                    break;
                }
              printf("Display the Stack\n");
              for(int i=0;i<MAX;i++)
              {
                printf("stack[%d]----->%d\n",i,stack[i]);
              }

              break;

            case 3:

                if(top==-1)
                {
                    printf("Stack is underflow\n");
                    break;
                }
               printf("POP\n");

              

               for(int i=0;i<MAX;i++)
               {
                    value=stack[top];
                    top=top-1;
                    printf("\nDelete value is %d\n",value);
                   
               }

               break;

            default :
              
              printf("Wrong choice\n");
               
        }

        printf("\nDo you want to continue\n");
        scanf("%c",&ch);
        ch=getch();
       


    } while (ch=='y' || ch=='Y');



    return 0;
    
    
}