#include <stdio.h>

int stack[20];
int top = -1;
int size = 20;
int i;

void push(int n)
{
    if (top >= size - 1){
        printf("Stack Overflow\n");
    }

    else
    {
        ++top;
        stack[top] = n;
    }
}

void pop()
{
    if (top < 0){
        printf("Stack Underflow\n");
    }

    else
    {
        top--;
    }
}

void display()
{
    if (top < 0){
        printf("Stack Underflow\n");
    }

    else
    {
        for (i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
    }
}

int main()
{
    int x;
    do{
    printf("Press 1 for PUSH\n");
    printf("Press 2 for POP\n");
    printf("Press 3 for Display\n");
    printf("PRESS Any Other Key for Termination\n");
    scanf("%d", &x);
    switch(x){
        case 1:
            int n;
            printf("Enter Element to push: ");
            scanf("%d", &n);
            // printf("\n");
            push(n);
            printf("\n");
            break;
        
        case 2:
            pop();
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