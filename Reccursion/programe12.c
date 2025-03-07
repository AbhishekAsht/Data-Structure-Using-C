#include<stdio.h>

void main(){

	int a = 0,b = 1,c;
	int d = 10, count = 0;

	while(d){
	
		printf(" %d",a);
		c  = a + b;
		a = b;
		b = c;
		d--;
	}
	printf("\nfibbonaci is = %d\n",);
}
