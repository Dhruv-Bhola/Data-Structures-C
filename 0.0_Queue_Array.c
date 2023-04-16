#include <stdio.h>

int queue[20];
int front = -1;
int rear = -1;
int n = 20;

void display()
{
    if (front == -1)
    {
        printf("Empty");
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            printf("%d \n", queue[i]);
        }
    }
    // printf("\n");
}

void insert(int item)
{
    if (rear == n - 1)
    {
        printf("Overflow");
    }
    else
    {
        if (rear == -1)
        {
            front = 0;
            rear=0;
            queue[front] = item;
        }
        else
        {
            rear++;
            queue[rear] = item;
        }
    }
}

void delete()
{
    if (front == -1 || front > rear)
    {
        printf("Underflow");
    }
    else
    {
        front++;
    }
}

int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(3);
    insert(3);
    insert(3);
    insert(3);
    insert(3);
    insert(3);
    insert(2);
    insert(3);
    insert(3);
    insert(3);
    insert(3);
    insert(3);
    insert(3);
    insert(3);
    insert(3);
    insert(3);
    insert(4);
    display();
    return 0;
}