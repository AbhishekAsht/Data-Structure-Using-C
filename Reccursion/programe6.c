#include<stdio.h>

int fact = 1;
int factorial(int x){

	if(x == 1){

		return fact;
	}
	fact = fact * x;
	return factorial(--x);
}
void main(){

	int fact = factorial(5);
	printf("%d\n",fact);
	
}
