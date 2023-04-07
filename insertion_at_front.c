#include<stdio.h>
int main()
{
	int n=5, a[5], i, val;
	for(i=0; i<=5; i++)
		a[i]=i;
		//scanf("%d ", &a[i]);
		
	
	printf("The elements are ");	
	for(i=0; i<=4; i++)
		printf(" %d ", a[i]);
		
	printf("\n");	
	printf("Enter the value you want to insert");
	scanf("%d", &val);
	
	printf("\n");
	//Insertion at the front

	
	printf("The elements are ");	
	for(i=n; i>=0; i--)
		a[i+1]=a[i];
		
	a[0]=val;
	
	printf("The elements are ");	
	for(i=0; i<=n; i++)
		printf(" %d ", a[i]);

}
