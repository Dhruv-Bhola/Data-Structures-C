#include <stdio.h>

int i, j, k;
int result[3][3];

void Display(int a[3][3])
{
    printf("\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void Addition(int a[3][3], int b[3][3])
{
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

void Subtraction(int a[3][3], int b[3][3])
{
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            result[i][j] = a[i][j] - b[i][j];
        }
    }
}

void Transpose(int a[3][3])
{
    Display(a);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            result[i][j] = a[j][i];
        }
    }
}

void Multiply(int a[3][3], int b[3][3])
{
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            result[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                result[i][j] += a[i][j] * b[j][k];
            }
        }
    }
}

int main()
{
    int a[3][3] = {1, 1, 1, 1, 1, 1, 1, 1, 1};
    int b[3][3] = {1, 1, 1, 1, 1, 1, 1, 1, 1};
    int c[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int x;
    printf("Enter 1 for Addition\n");
    printf("Enter 2 for Subtraction\n");
    printf("Enter 3 for Transpose\n");
    printf("Enter 4 for Multiplication:\n");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        Addition(a, b);
        break;
    case 2:
        Subtraction(a, b);
        break;
    case 3:
        Transpose(c);
        break;
    case 4:
        Multiply(a, b);
        break;
    default:
        printf("Wrong Input");
    }
    Display(result);
    return 0;
}
