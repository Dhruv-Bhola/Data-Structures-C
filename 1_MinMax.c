#include <stdio.h>
int main()
{
    int a[5];
    printf("Enter Elements in Array: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    int max, min;
    max=min=a[0];
    for (int i = 0; i < 5; i++)
    {
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("\nMax Element: %d", max);
    printf("\nMin Element: %d", min);
    return 0;
}