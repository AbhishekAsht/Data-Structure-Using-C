#include<stdio.h>

void sortarr(int arr[],int size){

	for(int i = 0; i<size; i++){
	
		for(int j = 0; j<size-i-1; j++){
		
			if(arr[j] > arr[j + 1]){
			
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j +1] = temp;
			}
		}
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

	sortarr(arr,size);

	printf("Sorted array\n");

	 for(int i = 0; i<size; i++){
	 
		 printf("%d\n",arr[i]);
	 }
	
}
