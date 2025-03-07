#include<stdio.h>

int sum = 0;

void sumN(int x){

	if(x > 0){
	
		sum = sum + x;
		printf("%d\n",x);
		sumN(--x);
	}
	printf("%d\n",sum);
}
void main(){

	sumN(5);
}
