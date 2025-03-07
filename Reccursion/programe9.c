#include<stdio.h>

int nontailDemo(int x){

	if(x == 1)
		return 1;

	return 3 + nontailDemo(--x);
}
void main(){

	int ret = nontailDemo(4);
	printf("%d\n",ret);
}
