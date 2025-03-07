#include<stdio.h>

int size = 0;
int top1 = 0;
int top2 = 0;
int flag1 = 0;
int flag2 = 0;


int push1(int* stack){

	if(top1 == top2-1){
	
		return -1;
	}else{
	
		top1++;
		printf("Enter a data\n");
		scanf("%d",stack+top1);
		return 0;
	}
}

int push2(int* stack){

	if(top1 == top2-1){
	
		return -1;
	}else{
	
		top2--;
		printf("Enter a data\n");
		scanf("%d",stack+top2);
		return 0;
	}
}

int pop1(int* stack){

	if(top1 == -1){
	
		flag1 = 0;
		return -1;
	}else{
	
		int val = *(stack + top1);
		top1--;
		flag1 = 1;
		return val;
	}
}

int pop2(int* stack){

	if(top2 == size){
	
		flag2 = 0;
		return -1;
	}else{
	
		int val = *(stack + top2);
		top2++;
		flag2 = 1;
		return val;
	}
}
void main(){

	printf("Enter a array size\n");
	scanf("%d",&size);

	int stack[size];
	top1 = -1;
	top2 = size;
	char choice;

	do{
	
		printf("1: push1\n");
		printf("2: push2\n");
		printf("3: pop1\n");
		printf("4: pop2\n");

		int ch;
		printf("Enter a choice\n");
		scanf("%d",&ch);

		switch(ch){
		
			case 1: {
				  int ret = push1(stack);
				  if(ret == -1)
					  printf("stack 1 overflow\n");
				}
				break;

			case 2: {
				  int ret = push2(stack);
				  if(ret == -1)
					  printf("stack 2 overflow\n");
				}
				break;

			case 3: {
				  int ret = pop1(stack);
				  if(flag1 == 0)
					  printf("stack 1 is undrflow\n");
				  else
					  printf("%d stack 1 data is popped\n",ret);
				}
				break;

			case 4: {
				  int ret = pop2(stack);
				  if(flag2 == 0)
					  printf("stack 2 is undrflow\n");
				  else
					  printf("%d stack 2 data is popped\n",ret);
				}
				break;

			default : printf("Wrong choice\n");
		}
		getchar();
		printf("Do you want continue\n");
		scanf("%c",&choice);
	}while(choice ==  'Y' || choice == 'y');


}
