#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front, *rear;

void display()
{
    struct node *ptr;
    ptr = front;
    if (front == NULL)
    {
        printf("\nEmpty queue\n");
    }
    else
    {
        printf("\nQueue values ...\n");
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
        printf("\n");
    }
}

void insert()
{
    struct node *ptr;
    int item;

    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\nOVERFLOW\n");
        return;
    }
    else
    {
        printf("Enter value: ");
        scanf("%d", &item);
        ptr->data = item;
        if (front == NULL)
        {
            front = ptr;
            rear = ptr;
            front->next = NULL;
            rear->next = NULL;
        }
        else
        {
            rear->next = ptr;
            rear=ptr;
            rear->next = NULL;
        }
    }
}

void delete()
{
    struct node *ptr;
    if (front == NULL)
    {
        printf("\nUNDERFLOW\n");
        return;
    }
    else
    {
        ptr = front;
        front = front->next;
        free(ptr);
    }
}

int main()
{
    int x;
    do
    {
        printf("Press 1 for Insertion\n");
        printf("Press 2 for Deletion\n");
        printf("Press 3 for Display\n");
        printf("PRESS Any Other Key for Termination\n");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            insert();
            printf("\n");
            break;

        case 2:
            delete();
            printf("\n");
            break;

        case 3:
            display();
            printf("\n");
            break;

        default:
            exit(0);
        }
    } while (1);
    return 0;
}