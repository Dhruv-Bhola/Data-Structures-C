#include<stdio.h>
#include<conio.h>

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int arr[], int lb, int ub)
{
	int pivot = arr[lb];
	int start = lb;
	int end = ub;

	while(start<end)
	{
		while(arr[start]<=pivot && start<ub)
		{
			start++;
		}

		while(arr[end]>pivot && end>lb)
		{
			end--;
		}

		if(start<end)
		{
			swap(&arr[start], &arr[end]);
		}
	}
	swap(&arr[lb], &arr[end]);
	return end;
}

void quickSort(int arr[], int lb, int ub)
{
	if(lb<ub)
	{
		int p=partition(arr, lb, ub);
		quickSort(arr, lb, p-1);
		quickSort(arr, p+1, ub);
	}
}

void main()
{
	int n, i, arr[7];
	clrscr();
	n=sizeof(arr)/sizeof(arr[0]);
	for(i=0; i<7; i++)
	{
		printf("Enter %d element: ", i+1);
		scanf("%d", &arr[i]);
	}
	quickSort(arr, 0, n-1);
	printf("\nSorted Array: ");
	for(i=0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
	getch();
}