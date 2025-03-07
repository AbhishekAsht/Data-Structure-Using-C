#include<stdio.h>

int fibo(int n){

	if(n == 0)
		return 0;
	if(n == 1)
		return 1;

	return fibo(n-1)+fibo(n-2);
}
void main(){

	long int n;
	printf("Enter a number\n");
	scanf("%ld",&n);

	long int ret = fibo(n);
	printf("%ld\n",ret);
}
