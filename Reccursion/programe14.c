#include<stdio.h>

int sumArray(int* arr,int size){

	if(size == 0)
		return 0;

	return sumArray(arr,size - 1) + arr[size - 1];
}
void main(){

	int arr[] = {1,2,3,4,5,6};
	int sum = sumArray(arr,6);
	printf("%d\n",sum);
}
