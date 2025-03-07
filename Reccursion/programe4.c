#include<stdio.h>

void fun(int a){

	printf("%d\n",a);

	fun(++a);
}
void main(){

	fun(10);

}
