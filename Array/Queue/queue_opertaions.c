#include <stdio.h>
#define SIZE 5
int queue[SIZE];
int front = -1, rear = -1, val;
void insertion(int value)
{
    if (rear == SIZE - 1)
    {
        printf("Queue is full\n");
        return;
    }
    if (front == -1)
    {
        front = 0;
    }
    rear++;
    queue[rear] = value;
    printf("%d inserted inside the queue\n", value);
}

void display()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is empty\n");
        return;
    }

    for (int i = front; i <= rear; i++)
    {
        printf("%d\n", queue[i]);
    }
}

int main()
{
    int opt;
    while (1)
    {
        printf("\n*****Queue Operations*****");
        printf("\n1.Insertion \n2.Display \n3.Exit \n");
        printf("Choose an option: ");
        scanf("%d", &opt);
        switch (opt)
        {
        case 1:
            printf("\nEnter an element: ");
            scanf("%d", &val);
            insertion(val);
            break;
        case 2:
            display();
            break;
        case 3:
            printf("****Exiting the program*******");
            return 0;
            break;
        default:
            printf("Choose the valid option.");
        }
    }
    return 0;
}