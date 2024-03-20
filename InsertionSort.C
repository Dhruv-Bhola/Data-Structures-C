#include<stdio.h>
#include<conio.h>
void InsertionSort(int arr[], int size);
void Display(int arr[], int size);
void main()
{
	int arr[6], i, j, N;
	clrscr();
	for(i=0; i<6; i++){
		printf("Enter %d element (Unsorted): ", i+1);
		scanf("%d", &arr[i]);
	}
	N=sizeof(arr)/sizeof(arr[0]);
	InsertionSort(arr,N);
	printf("Sorted Array:\n");
	Display(arr, N);
	//printf("%d %d", N, sizeof(arr[0]));
	/*for(j=0; j<10; j++){
		printf("%d Element is: %d\n", j+1, arr[j]);
	}
	printf("Total no of Elements: %d", j);
	*/
	getch();
}
void InsertionSort(int arr[], int size)
{
	int i, j, key;
	for(j=1; j<size; j++)
	{
		key = arr[j];
		i=j-1;
		while(i>=0 && arr[i]>key)
		{
			arr[i+1]=arr[i];
			i--;
		}
		arr[i+1]=key;
	}
}
void Display(int arr[], int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("%d ", arr[i]);
	}
}