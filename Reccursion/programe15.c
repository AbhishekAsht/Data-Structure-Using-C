#include<stdio.h>

int checkchar(char* arr,int size,char ch){

	if(size == 0)
		return -1;

	if(arr[size - 1] == ch)
		return size - 1;

	return checkchar(arr,size - 1,ch);
}
void main(){

	char ch;
	printf("Enter a charcter\n");
	scanf("%c",&ch);

	char arr[] = {'a','b','c','d','e'};
	int ret = checkchar(arr,5,ch);
	
	if(ret == -1)
		printf("not found\n");
	else

        	printf("index is = %d\n",ret);
}
