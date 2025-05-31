#include<stdio.h>
void selectionSort(int arr[],int n){
	int i,j,min_idx;
	for(i=0;i<n;i++){
		min_idx = i;
		for(j=i+1;j<n;j++){
			if(arr[min_idx] > arr[j]){
				min_idx = j;
			}
		}
		int temp = arr[min_idx];
		arr[min_idx] = arr[i];
		arr[i] = temp;
	}
	printf("The sorted Array :---\n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}

int main(){
	int n,i;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter array elements :---\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	selectionSort(arr,n);
	return 0;
}