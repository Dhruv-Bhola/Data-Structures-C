#include<stdio.h>
int main(){
	int i, left, right, mid, value;
	int a[5]={1,2,3,4,5};
	left=0;
	right=sizeof(a)-1;
	
	printf("Displaying Array: ");
	for(i=0;i<5;i++){
		printf("%d ", a[i]);
	}

	printf("\nEnter value to find index of: ");
	scanf("%d", &value);
//	Binary Search
	while(left<=right){
		mid=(left+right)/2;
		if(mid==value){
		printf("%d ", mid-1);
		break;
		}
		else if(value<mid){
		right=mid-1;
		}
		else{
		left=mid+1;
		}
	}
	return 0;
}
