#include<stdio.h>
void bubbleSort(int arr[],int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	printf("The sorted Array is :---\n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}

int main(){
	int n,i;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	bubbleSort(arr,n);
	return 0;
}