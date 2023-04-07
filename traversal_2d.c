#include<stdio.h>
int main(){
	int i, j, row, column;
	printf("Enter Rows: ");
	scanf("%d", &row);
	printf("Enter Columns: ");
	scanf("%d", &column);
	
	int a[row][column];

	printf("Enter elements in array : ");
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
		scanf("%d", &a[i][j]);
		}
	}
	printf("Displaying Array: \n");
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
		printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
