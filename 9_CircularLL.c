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

void del_key(int key)
{
    struct node *temp = last;
    struct node *p;
    if (temp != NULL && temp->data == key)
    {
        p = last;
        // temp = last;
        while (temp->next != last)
        {
            temp = temp->next;
        }
        temp->next = last->next;
        last = temp;
        free(p);
    }

    else{
    while (temp != NULL && temp->data != key)
    {
        p = temp;
        temp = temp->next;

        if (temp == NULL)
        {
            return;
        }
    }

    p->next = temp->next;
    free(temp);
    }
}

int main()
{
        int x;
    printf("Press 1 for Insertion At Beginning\n");
    printf("Press 2 for Insertion At End\n");
    printf("Press 3 for Insertion At Given Position\n");
    printf("Press 4 for Deletion From Beginning\n");
    printf("Press 5 for Deletion From End\n");
    printf("Press 6 for Deletion From Given Position\n");
    printf("Press 7 for Deletion From Given Key\n");
    printf("Press 8 for Displaying Linked List\n");
    printf("PRESS Any Other Key for Termination\n");
    do{
    scanf("%d", &x);
    switch(x){
        case 1:
            int n;
            printf("Enter Element to insert: ");
            scanf("%d", &n);
            insert_big(n);
            printf("\n");
            break;
        
        case 2:
            int n1;
            printf("Enter Element to insert: ");
            scanf("%d", &n1);
            insert_end(n1);
            printf("\n");
            break;
        
        case 3:
            int n2, pos;
            printf("Enter Element to insert: ");
            scanf("%d", &n2);
            printf("Enter Element's position: ");
            scanf("%d", &pos);
            insert_giv(n2, pos);
            printf("\n");
            break;

        case 4:
            del_big();
            break;
        
        case 5:
            del_end();
            break;
        
        case 6:
            int pos1;
            printf("Enter Element's position: ");
            scanf("%d", &pos1);
            del_giv(pos1);
            break;
            
         case 7:
            int key;
            printf("Enter Element: ");
            scanf("%d", &key);
            del_key(key);
            break;
        
        case 8:
            display();
            // printf("\n");
            break;
        
        default:
            // return;
            exit(0);
    }
    }while(1);

    return 0;
}