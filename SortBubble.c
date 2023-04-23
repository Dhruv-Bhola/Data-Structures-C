#include <stdio.h>

void display(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void bubbleSort(int a[], int n)
{

    for (int i = 0; i < n-1; i++)
    {
        int temp;
        for (int j = 0; j < n-i-1; j++)
        {
            if (a[j+1]<a[j])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp; 
            }      
        }  
    }
}

int main()
{
    int a[6] = {12, 17, 14, 13, 9, 88};
    int b=sizeof(a)/sizeof(a[0]);
    display(a, b);
    bubbleSort(a, b); 
    display(a, b);
    return 0;
}
