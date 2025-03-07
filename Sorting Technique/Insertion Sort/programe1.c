#include<stdio.h>

void insertionsort(int* arr, int size){

	for(int i = 0; i<size; i++){
	
		int val = arr[i];
		int j = i - 1;

		for(      ;j>=0 && arr[j]>val;j--){
		
			arr[j+1] = arr[j];
		}

		arr[j+1] = val;
	}
}
void main(){

	int size;
	printf("Enter a size\n");
	scanf("%d",&size);

	int arr[size];
	for(int i = 0; i<size; i++){
	
		scanf("%d",&arr[i]);
	}

	insertionsort(arr,size);

	printf("sorted array\n");
	for(int j = 0; j<size; j++){
	
		printf("%d\n",arr[j]);
	}
}
