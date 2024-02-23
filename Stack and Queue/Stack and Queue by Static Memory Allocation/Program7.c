#include<stdio.h>
#include<conio.h>

int main()
{
    int queue[5],rear=-1,front=0,value,choice,i;
    int MAX = sizeof(queue)/sizeof(queue[0]);
    char ch;

    do
    {
        printf("1:PUSH\n");
        printf("2:Display\n");
        printf("3.Delete\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);
        

        switch(choice)
        {
            case 1:
              printf("INSERT\n");
              for(i=0;i<=MAX;i++)
              {
                if(rear==(MAX-1) && front==rear+1)
                {
                    printf("The Queue is full\n");
                    break;
                }
                else
                {
                    rear=rear+1;
                    printf("Enter the value in the queue\n");
                    scanf("%d",&value);
                    queue[rear]=value;

                }

              }
              break;

            case 2:
              
              printf("\nDisplay\n");
              if((rear==-1 && front==0) || (front==rear+1))
                    {
                        printf("Queue is Empty\n");
                        break;

                    }

              for(i=0;i<MAX;i++)
              {
                    printf("%d\t",queue[i]);

              }

            break;

            case 3:

               printf("\nDELETE\n");
               

               for(i=0;i<=MAX;i++)
               {

                   if( front==rear+1 || (front==0 && rear==-1))
                   {
                      printf("The queue is Empty\n");
                      break;
                   }
                   else
                   {
                        value=queue[front];
                        printf("Deleted value is : %d\n",value);
                        front=front+1; 
                       
                   }

                    
               }

               break;

            default :
               printf("Wrong choice\n");  
              
        }

         printf("\nDo you want to continue\n");
         scanf("%c",&ch);
         ch=getch();
              
    } while (ch=='y' || ch== 'Y');

    return 0;
    
}