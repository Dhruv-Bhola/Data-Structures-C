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
            printf("%d ", queue[i]);
        }
    }
    printf("\n");
}

void enqueue(int item)
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

void dequeue()
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
    int x;
    do{
    printf("Press 1 for Insertion\n");
    printf("Press 2 for Deletion\n");
    printf("Press 3 for Display\n");
    printf("PRESS Any Other Key for Termination\n");
    scanf("%d", &x);
    switch(x){
        case 1:
            int n;
            printf("Enter Element to Insert: ");
            scanf("%d", &n);
            // printf("\n");
            enqueue(n);
            printf("\n");
            break;
        
        case 2:
            dequeue();
            //printf("\n");
            break;
        
        case 3:
            printf("\n");
            display();
            printf("\n");
            break;
        
        default:
            return;
            // exit(0);
    }
    }while(1);
    return 0;
}