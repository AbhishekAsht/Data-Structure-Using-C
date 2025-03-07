#include<stdio.h>

void fun(int a){

	printf("%d\n",a);

	if(a != 1)
	fun(--a);
}
void main(){

	int a = 10;
	fun(a);
}
