
#include <stdio.h>
#define SIZE 100

int queue[SIZE];
int front = -1, rear = -1;

void enqueue()
{
    int value;

    if(rear == SIZE - 1)
    {
        printf("Queue is Full\n");
    }
    else
    {
        printf("Enter element to insert: ");
        scanf("%d", &value);

        if(front == -1)
            front = 0;

        rear++;
        queue[rear] = value;

        printf("Element inserted successfully\n");
    }
}

void dequeue()
{
    if(front == -1 || front > rear)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Deleted element = %d\n", queue[front]);
        front++;

        if(front > rear)
        {
            front = rear = -1;
        }
    }
}

void display()
{
    int i;

    if(front == -1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Queue elements are:\n");

        for(i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Display");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                enqueue();
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting program...");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while(choice != 4);

    return 0;
}

