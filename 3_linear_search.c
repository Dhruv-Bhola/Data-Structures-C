#include<stdio.h>
int main(){
	int i, value;
	int a[5];
//	int a[5]={1,2,3,4,5};
	printf("Enter elements in array (only 5): ");
	for(i=0;i<5;i++){
		scanf("%d", &a[i]);
	}
	printf("Displaying Array: ");
	for(i=0;i<5;i++){
		printf("%d ", a[i]);
	}
	{
	printf("\nEnter value to find index of: ");
	scanf("%d", &value);
}
//	Linear Search
	for(i=0;i<5;i++){
		if(value==a[i]){
			printf("%d", i);
		}
	}
	return 0;
}
