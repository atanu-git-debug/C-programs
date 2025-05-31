#include<stdio.h>

int linearSearch(int arr[], int n, int elem){
	int i,count=0;
	for(i=0;i<n;i++){
		if(arr[i] == elem){
			count++;
		}
	}
	return count;
}

void print(int arr[],int n, int elem){
	int count = linearSearch(arr,n,elem);
	if(count > 0){
		printf("Element found in the array %d times",count);
	}else{
		printf("Element is not present in the array");
	}
}

int main(){
	int n;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int arr[n],i,elem;
	printf("\nEnter array elements\n: ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the number looking for: ");
	scanf("%d",&elem);
	print(arr,n,elem);
	return 0;
}