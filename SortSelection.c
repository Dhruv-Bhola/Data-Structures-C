#include <stdio.h>

void display(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void selectionSort(int *a, int n)
{
    int min, temp;
    for (int i = 0; i < n-1; i++)
    {
        min = i;
        for (int j = i+1; j<n-1; j++)
        {
            if (a[j]<a[min])
            {
                min = j;
            } 
        }
        // temp=a[min];
        // a[min]=a[i];
        // a[i]=temp;
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
        
        
    }
    
}
//          min
//       i  j
// 00,01,02,03,04,05
// 12,14,13,09,17,88
// 12,13,14,09,17,88


int main()
{
    int a[6] = {12, 17, 14, 13, 9, 88};
    display(a, 6);
    selectionSort(a, 6); 
    display(a, 6);
    return 0;
}
