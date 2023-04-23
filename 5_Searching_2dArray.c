#include <stdio.h>

int main()
{
    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i, j, value;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Enter value to find index of: ");
    scanf("%d", &value);

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (value == a[i][j])
            {
                printf("\nValue Found");
                printf("\nRow: %d", i+1);
                printf("\nColumn: %d", j+1);
            }
        }
    }

    return 0;
}
