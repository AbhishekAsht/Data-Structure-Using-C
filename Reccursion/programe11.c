#include<stdio.h>

int fun(int x){

	if(x <= 1){
	
		return 1;
	}
	int a = fun(x - 1);
	int b = fun(x - 2);
	printf("%d",a);
	printf("%d",b);
}
void main(){

	int ret = fun(4);
	//printf("%d\n",ret);

}
