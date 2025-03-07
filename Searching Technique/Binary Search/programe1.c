#include<stdio.h>

int search(int *arr,int size,int ele){

	int start = 0,end = size-1,mid = 0;

	while(start <= end){

		mid = (start + end) / 2;
	
		if(arr[mid] == ele){
		
			return mid;

		}else if(arr[mid] > ele){
		
			end = mid - 1;

		}else if(arr[mid] < ele){
		
			start = mid + 1;

		}else{
		
			return -1;
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
	int ele;
	printf("Enter a search element\n");
	scanf("%d",&ele);

	int ret = search(arr,size,ele);

	if(ret == -1)
		printf("Not found\n");
	else
		printf("search no is mid = %d\n",ret);

	
}
