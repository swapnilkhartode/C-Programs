// Queue

// Insert data in queue.

#include<stdio.h>
int main()
{
    int queue[5],rear=-1,i,value;

    int MAX = sizeof(queue)/sizeof(queue[0]);

    for(i=0;i<MAX;i++)
    {
        if(rear==(MAX-1))
        {
            printf("Queue is Full\n");
        }
        else
        {
            rear = rear + 1;
            printf("Enter the value in Queue\n");
            scanf("%d",&value);
            queue[rear]=value;

        }

    }

    // Print data inside the queue...

    printf("Print the queue\n");
    for(i=0;i<MAX;i++)
    {
        printf("%d\t",queue[i]);
    }

    
}