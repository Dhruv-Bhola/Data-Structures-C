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
            printf("%d\n", stack[i]);
        }
    }
}

int main()
{
    int x;
    printf("Press 1 for PUSH\n");
    printf("Press 2 for POP\n");
    printf("Press 3 for Display\n");
    scanf("%d", &x);
    if(x==1){
        int n;
        printf("Enter Element to push: ");
        scanf("%d", &n);
        push(n);
        printf("\n");
        main();
    }
    else if(x==2){
        pop();
        printf("\n");
        main();
    }
    else{
        printf("\n");
        display();
    }
    return 0;
}