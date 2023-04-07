#include<stdio.h>

void display(int* a, int n){
    for(int i=0;i<n;i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

void insertionSort(int* a, int n){
    int key, j;
    for (int i = 1; i < n-1; i++)
    {
        key = a[i];
        for (j = i-1; (j >= 0) && (a[j]>key); j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=key;
    }
}

// j     i
// 00,01,02,03,04,05
// 12,17,14,13,9,88
// 12,12,17,13,9,88

int main(){
    int a[6]={12,17,14,13,9,88};
    display(a, 6);
    insertionSort(a, 6);
    display(a, 6);
    return 0;
}