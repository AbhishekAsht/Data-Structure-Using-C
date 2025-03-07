#include<stdio.h>

void mergel(int arr[],int start,int mid,int end){

	int ele1 = mid - start + 1;
	int ele2 = end - mid;
	int arr1[ele1],arr2[ele2];

	for(int i = 0; i<ele1; i++){
	
		arr1[i] = arr[start + i];
	}
	for(int j = 0; j<ele2; j++){
	
		arr2[j] = arr[mid + 1 + j];
	}

	int itr1 = 0,itr2 = 0, itr3 = start;
	while(itr1<ele1 && itr2<ele2){
	
		if(arr1[itr1]<arr2[itr2]){
		
			arr[itr3] = arr1[itr1];
			itr1++;
		}else{
		
			arr[itr3] = arr2[itr2];
			itr2++;
		}
		itr3++;
	}
	while(itr1<ele1){
	
		arr[itr3] = arr1[itr1];
		itr1++;
		itr3++;
	}
	while(itr2<ele2){
	
		arr[itr3] = arr2[itr2];
		itr2++;
		itr3++;
	}
}
void mergesort(int* arr,int start,int end){

	if(start < end){
	
		int mid = (start + end)/2;
		mergesort(arr,start,mid);
		mergesort(arr,mid + 1,end);
		mergel(arr,start,mid,end);
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
	int start = 0,end = size - 1;

	mergesort(arr,start,end);

	printf("sorted array\n");
	for(int j = 0; j<size; j++){
	
		printf("%d\n",arr[j]);
	}
}
