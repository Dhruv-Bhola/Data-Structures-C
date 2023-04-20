#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *last = NULL;

void display()
{
    struct node *p;
    // p = (struct node *)malloc(sizeof(struct node));
    p = last->next;
    if (last == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        do
        {
            printf("%d ", p->data);
            p = p->next;
        } while (p != last->next);

        printf("\n");
    }
}

void insert_big(int data)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = data;

    if (last == NULL)
    {
        p->next = p;
        last = p;
    }
    else
    {
        p->next = last->next;
        last->next = p;
    }
}
void insert_end(int data)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = data;

    if (last == NULL)
    {
        p->next = p;
        last = p;
    }
    else
    {
        p->next = last->next;
        last->next = p;
        last = p;
    }
}

// int lsize()
// {
//     int s = 0;
//     struct node *temp = last;
//     while (temp->next != last)
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
    struct node *temp = last->next;
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
void del_end()
{
    struct node *p, *temp;
    p = last;
    temp = last;
    while (temp->next != last)
    {
        temp = temp->next;
    }
    temp->next = last->next;
    last = temp;
    free(p);
}
void del_big()
{

    if (last == NULL)
    {
        printf("\nlist is empty");
    }
    else if (last->next == NULL)
    {
        last = NULL;
        free(last);
    }
    else
    {
        struct node *p;
        p = last->next;
        last->next = p->next;
        free(p);
    }
}
void del_giv(int pos)
{
    // int size = lsize();
    // // printf("%d", size);
    // if (pos < 0 || pos >= size)
    // {
    //     printf("Invalid position to delete\n");
    // }

    // else
    // {
    struct node *temp = last->next;
    // struct node *temp = last;
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
    insert_giv(4, 2);
    del_big();
    del_end();
    del_giv(0);
    display();

    return 0;
}