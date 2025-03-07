#include<stdio.h>

int firstoccurence(int* arr,int size,int ele){

	int start = 0,end = size -1,store = 0;

	while(start <= end){
	
		int mid = (start + end) / 2;

		if(arr[mid] == ele){
		  
			store = mid;
	
			if(arr[mid - 1] < ele){
			
			 	return mid;
			}
		}
		if(arr[mid] > ele){
			
			end = mid - 1;

		}else if(arr[mid] < ele){
			
			start = mid + 1; 
		}else{
			
			return -1;
		}

		return store;
	}
}
void main(){

	int size ;
	printf("Enter a size\n");
	scanf("%d",&size);

	int arr[size];

	for(int i = 0; i<=size-1; i++){
	
		scanf("%d",&arr[i]);
	}

	int ele;
	printf("Enter a element\n");
	scanf("%d",&ele);

	int ret = firstoccurence(arr,size,ele);

	if(ret == -1)
		printf("Not found\n");
	else
		printf("first occurence index is = %d\n",ret);
}
