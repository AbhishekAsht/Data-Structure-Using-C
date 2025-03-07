#include<stdio.h>

int Lastoccurence(int* arr,int size,int ele){

	int store;

	for(int i = 0; i<=size-1; i++){
	
		if(arr[i] == ele){
		
			store = i;
		}
	}

	return store;
}
void main(){

	int size;

	printf("Enter a size\n");
	scanf("%d",&size);

	int arr[size];
	printf("Enter a Element\n");
	for(int i = 0; i<=size-1; i++){
	
		scanf("%d",arr + i);
	}

	int ele;
	printf("Enter a element\n");
	scanf("%d",&ele);

	int ret = Lastoccurence(arr,size,ele);

	if(ret == -1){
	
		printf("Number not found\n");
	}else{
	
		printf("last occurence is = %d\n",ret);
	}
}
