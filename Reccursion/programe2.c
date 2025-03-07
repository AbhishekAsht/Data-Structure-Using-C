#include<stdio.h>

void fun(int x){

	for(int i = x; i > 0; i--){
	
		printf("%d\n",i);
	}
}
void main(){

	int a = 10;
	fun(a);
}
