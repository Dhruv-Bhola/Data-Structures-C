#include<stdio.h>
int main(){
	int i, j, row, column, value, c, d;
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
	printf("Displaying Array before insertion: \n");
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
		printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	
	printf("Enter value to insert: ");
	scanf("%d", &value);
	
	printf("Enter row in which to insert element: ");
	scanf("%d", &c);
	printf("Enter column in which to insert element: ");
	scanf("%d", &d);
	
	a[c][d]=value;
	
	printf("Displaying Array after insertion: \n");
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
		printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
