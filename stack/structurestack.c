#include<stdio.h>
//#include<>

typedef struct movie{

	char mName[20];
	int count;
	float price;
}mv;

int top = -1;

void main(){

	mv obj1,obj2,obj3;

	mv stack[] ={obj1,obj2,obj3};
		
	do{
	
		printf("1: push\n");
		printf("2: pop\n");
		printf("3: peek\n");

		int ch;
		printf("Enter a choice\n");
		scanf("%d",&ch);
	}
}
