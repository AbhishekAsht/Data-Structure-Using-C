#include<stdio.h>

int tailDemo(int x){

	if(x == 1)
		return 1;

	return tailDemo(--x);
}
void main(){

	int ret = tailDemo(4);
	printf("%d\n",ret);
}
