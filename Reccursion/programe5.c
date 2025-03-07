#include<stdio.h>

int sumnum(int num){

	static int sum = 0;

	sum = sum + num;

	if(num != 1)
		sumnum(--num);
	return sum;
}
void main(){

	int num;
	printf("Enter a number\n");
	scanf("%d",&num);
	int sum = sumnum(num);
	printf("sum of = %d\n",sum);
}
