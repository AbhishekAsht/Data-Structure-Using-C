#include<stdio.h>

int searchEle(int* arr,int size, int ele){

	for(int i = 0; i<=size-1; i++){
	
		if(arr[i] == ele){
		
			return i;
		}

	}

	return -1;

}
void main(){

	int size;
	printf("Enter a size\n");
	scanf("%d",&size);

	int arr[size];
        printf("Enter a array element\n");
	for(int i = 0; i<=size-1; i++){
	
		scanf("%d",&arr[i]);
	}	

	int ele;
	printf("Enter a element\n");
	scanf("%d",&ele);

	int ret = searchEle(arr,size,ele);

	if(ret == -1)
	
		printf("Not found ele\n");
	else

		printf("search index array = %d\n",ret);

}
