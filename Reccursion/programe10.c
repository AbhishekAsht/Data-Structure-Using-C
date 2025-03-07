#include<stdio.h>

int factorial(int x){

	if(x <= 1)
		return 1;

	return factorial(x -1) * x;
}
void main(){

	int ret = factorial(5);
	printf("%d\n",ret);
}
