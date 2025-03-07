#include<stdio.h>

void selectionsort(int* arr,int size){

	for(int i = 0; i<size; i++){
	
		int minIndex = i;

		for(int j = i + 1; j<size; j++){
		
			if(arr[minIndex]>arr[j]){
			
				minIndex = j;
			}
		}
		int a;
		a = arr[i];
		arr[i] = arr[minIndex];
		arr[minIndex] = a;
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

	selectionsort(arr,size);

	printf("sorted array\n");
	for(int j = 0; j<size; j++){
	
		printf("%d\n",arr[j]);
	}
}
