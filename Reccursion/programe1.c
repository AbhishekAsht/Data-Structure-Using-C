#include<stdio.h>

int pairarr(int* arr,int arrsize,int num){

	int i = 0,j = 1,count = 0;
	int* b = arr;

	while(arrsize){
	
		if(arr[i] + b[j] == num)
		count++;

		j++;
		i++;
		arrsize--;
	}

	return count;
}
void main(){

	int arr[] ={1,2,3,4,5,6};
	int arrsize = sizeof(arr)/sizeof(int);
	int num;
	printf("Enter a num\n");
	scanf("%d",&num);
	int count = pairarr(arr,arrsize,num);
	printf("count is arrpair = %d\n",count);
}
