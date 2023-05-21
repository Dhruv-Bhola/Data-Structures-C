#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int data;
    struct stack *next;
} *top=NULL;

int size = 0;
int max_size = 20;

void display()
{
    if (size <= 0 || !top)
    {
        printf("Stack is empty.\n");
    }

    else
    {
        printf("The Stack is: \n");
        struct stack *p = top;
        do
        {
            printf("%d ", p->data);
            p = p->next;
        } while (p != NULL);

        printf("\n");
    }
}

void push(int element)
{
    if (size >= max_size)
    {
        printf("Stack Overflow, can't add more element to stack.\n");
        return;
    }

    struct stack *newNode = (struct stack *)malloc(sizeof(struct stack));
    newNode->data = element;
    newNode->next = top;
    top = newNode;
    size++;

    printf("Data pushed to stack.\n");
}

void pop()
{
    struct stack *topNode;

    if (size <= 0 || !top)
    {
        printf("Stack is empty.\n");
    }

    topNode = top;
    top = top->next;
    free(topNode);

    size--;
}

int main()
{
    int choice, data;
    while (1)
    {
        /* Menu */
        printf("------------------------------------\n");
        printf("    STACK IMPLEMENTATION PROGRAM    \n");
        printf("------------------------------------\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("------------------------------------\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data to push into stack: ");
            scanf("%d", &data);
            push(data);
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            printf("Exiting ...\n");
            exit(0);
            break;

        default:
            printf("Invalid choice, please try again.\n");
        }
        printf("\n\n");
    }

    return 0;
}
