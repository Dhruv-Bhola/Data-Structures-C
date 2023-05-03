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
}

void del_key(int key)
{
    struct node *temp = head;
    struct node *p;
    if (temp != NULL && temp->data == key)
    {
        head = head->next;
        free(temp);
        return;
    }

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