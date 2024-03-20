#include<stdio.h>
#include<conio.h>
void BubbleSort(int arr[], int size);
void Display(int arr[], int size);
void main()
{
	int arr[10], i, j, N;
	clrscr();
	for(i=0; i<10; i++){
		printf("Enter %d element: ", i+1);
		scanf("%d", &arr[i]);
	}
	N=sizeof(arr)/sizeof(arr[0]);
	BubbleSort(arr,N);
	printf("Printing the elements of Array:
	");
	Display(arr, N);
	//printf("%d %d", N, sizeof(arr[0]));
	/*for(j=0; j<10; j++){
		printf("%d Element is: %d\n", j+1, arr[j]);
	}
	printf("Total no of Elements: %d", j);
	*/
	getch();
}
void BubbleSort(int arr[], int size)
{
	int i, j, temp;
	for(i=0; i<size-1; i++)
	{
		for(j=0; j<size-i-1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}

}
void Display(int arr[], int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("%d\n", arr[i]);
	}
}























