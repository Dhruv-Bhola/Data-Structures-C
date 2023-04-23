#include<stdio.h>

void insertion(int a[]){
	int n, val;
	printf("\nDisplaying Array before insertion: ");
	for(int j=0;j<5;j++){
		printf("%d ",a[j]);
	}
	
	printf("\nEnter position to insert: ");
	scanf("%d", &n);
	
	printf("\nEnter value to insert: ");
	scanf("%d", &val);
	
	for(int j=5;j>=n;j--){
//		a[6]=0;
		a[j]=a[j-1];
	}
//	a[6]=0;
	
	a[n-1]=val;
	
	printf("\nDisplaying Array after insertion: ");
	for(int j=0;j<6;j++){
		printf("%d ",a[j]);
	}
}

void display(int a[]){
	int j;
	printf("\nDisplaying Array: ");
	for(j=0;j<5;j++){
		printf("%d ",a[j]);
	}
}

void deletion(int a[]){
	int j, n, p;
	printf("\nDisplaying Array before deletion: ");
	for(j=0;j<5;j++){
		printf("%d ",a[j]);
	}
	
	printf("\nEnter element to delete: ");
	scanf("%d", &n);
	
	for(j=0;j<5;j++){
		if(a[j]==n){
			p=j;
			break;
		}
	}
	
	for(j=p;j<4;j++){
	a[j]=a[j+1];
	}
	
	printf("\nDisplaying Array after deletion: ");
	for(j=0;j<4;j++){
		printf("%d ",a[j]);
	}
}

int main(){
	int n, i;
	int a[6];
	printf("Enter elements in array: \n");
	for(i=0; i<5; i++){
		scanf("%d", &a[i]);
	}
	
	printf("\nPRESS\n1 for deletion\n2 for insertion\n3 for printing array: \n");
	scanf("%d", &n);
	
	if(n==1){
		deletion(a);
	}
	
	else if(n==2){
		insertion(a);
	}
	
	else{
		display(a);	
	}
	
	
	return 0;
}
