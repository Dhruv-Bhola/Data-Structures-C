#include <stdio.h>

int queue[5];
int front = -1;
int rear = -1;
int n = 5;

void display()
{
    if (front == -1)
    {
        printf("Empty");
    }
    else
    {
        if (front > rear)
        {
            for (int i = front; i < n; i++)
            {
                printf("%d ", queue[i]);
            }
            front = 0;
            display();
        }
        else
        {
            for (int i = front; i <= rear; i++)
            {
                printf("%d ", queue[i]);
            }
        }
    }
    printf("\n");
}

void enqueue(int item)
{
    if ((front == rear + 1) || (front == 0 && rear == n - 1))
    {
        printf("Overflow");
    }
    else
    {
        if (rear == -1)
        {
            front = 0;
            rear = 0;
        }
        else if (rear == n - 1)
        {
            rear = 0;
        }
        else
        {
            rear++;
        }
        queue[rear] = item;
    }
}

void dequeue()
{
    if (front == -1)
    {
        printf("Underflow");
    }
    else
    {
        int val = queue[front];
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }

        else if (front == n - 1)
        {
            front = 0;
        }

        else
        {
            front++;
        }
    }
}

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    dequeue();
    enqueue(5);
    display();
    return 0;
}
