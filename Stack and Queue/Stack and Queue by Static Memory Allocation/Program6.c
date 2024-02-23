// delete the elemintes from queue (Deletion operation)....

#include<stdio.h>
int main()
{
    int queue[6],rear=-1,front=0,value=0,i;
    int MAX = sizeof(queue)/sizeof(queue[0]);

// INSERT THE DATA IN QUEUE(Insertion Operaration)
    for(i=0;i<=MAX;i++)
    {
        if(rear==(MAX-1))
        {
            printf("The Queue is Overflow\n");
        }
        else
        {
            rear = rear +1;
            printf("Enter the value in Stack\n");
            scanf("%d",&value);
            queue[rear]=value;
        }
    }
// PRINT THE DATA IN QUEUE(Display)
    printf("Print the queue\n");

    for(i=0;i<MAX;i++)
    {
        printf("%d\t",queue[i]);
    }

// DELETE THE ELEMENTS (Deletion Operation)
    for(i=0;i<=MAX;i++)
    {
        if((rear==-1 && front==0) || front == rear+1)
        {
            printf("\nTHE Queue is empty\n");
            
        }
        else
        {
            value=queue[front];
            printf("\nDeleted value is : %d\n",value);
            front=front+1;
        }
    }

    return 0;

}



