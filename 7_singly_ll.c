#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void display()
{
    struct node *p;
    // p = (struct node *)malloc(sizeof(struct node));
    p = head;
    if (head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        while (p != NULL)
        {
            printf("%d ", p->data);
            p = p->next;
        }
        printf("\n");
    }
}

void insert_big(int data)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = data;

    if (head == NULL)
    {
        p->next = NULL;
        head = p;
    }
    else
    {
        p->next = head;
        head = p;
    }
}
void insert_end(int data)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = data;
    p->next = NULL;

    if (head == NULL)
    {
        head = p;
    }
    else
    {
        struct node *temp;
        // temp = (struct node *)malloc(sizeof(struct node));
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = p;
    }
}

// int lsize()
// {
//     int s = 0;
//     struct node *temp = head;
//     while (temp != NULL)
//     {
//         temp = temp->next;
//         s++;
//     }
//     return s;
// }

void insert_giv(int data, int pos)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = data;

    // int size = lsize();
    // if (pos < 0 || pos >= size)
    // {
    //     printf("Invalid position to insert\n");
    // }

    // else
    // {
    struct node *temp = head;
    while (pos > 0)
    {
        temp = temp->next;
        pos--;
        if (temp == NULL)
        {
            printf("Invalid Position");
            return;
        }
    }
    p->next = temp->next;
    temp->next = p;
    // }
}
void del_big()
{
    struct node *p;
    p = head;
    head = head->next;
    free(p);
}
void del_end()
{

    if (head == NULL)
    {
        printf("\nlist is empty");
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(head);
    }
    else
    {
        struct node *p, *before;
        p = head;
        while (p->next != NULL)
        {
            before = p;
            p = p->next;
        }

        before->next = NULL;
        free(p);
    }
}
void del_giv(int pos)
{
    // int size = lsize();
    // if (pos < 0 || pos >= size)
    // {
    //     printf("Invalid position to delete\n");
    // }

    // else
    // {
    struct node *temp = head;
    struct node *p;
    while (pos > 0)
    {
        temp = temp->next;
        pos--;
        if (temp == NULL)
        {
            printf("Invalid Position");
            return;
        }
    }
    p = temp->next;
    temp->next = p->next;
    free(p);
    // }
}

int main()
{
    insert_big(2);
    insert_end(3);
    insert_big(1);
    insert_end(0);
    insert_end(5);
    insert_giv(4, 3);
    del_big();
    del_end();
    del_giv(0);
    display();

    return 0;
}