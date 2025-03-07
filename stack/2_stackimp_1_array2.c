#include<stdio.h>

int top1 = 0;
int top2 = 0;
int size = 0;
int flag = 0;

int push(int* stack){

	int s;
	printf("Enter a stack push 1/2\n");
	scanf("%d",&s);
	if(s == 1){
	
		if(top1 == top2-1){
		
			return -1;
		}else{
		
			top1++;
			printf("Enter a data\n");
			scanf("%d",stack+top1);
			return 0;
		}
	}else{
	
		if(top1 == top2-1){
		
			return -1;
		}else{
		
			top2--;
			printf("Enter a data\n");
			scanf("%d",stack+top2);
			return 0;
		}
	}
}

int pop(int* stack){

	int s;
	printf("Enter a stack pop 1/2\n");
	scanf("%d",&s);
	if(s == 1){
	
		if(top1 == -1){
		
			flag = 0;
			return -1;
		}else{
		
			int val = *(stack+top1);
			top1--;
			flag = 1;
			return val;
		}
	}else{
	
		if(top2 == size){
		
			flag = 0;
			return -1;
		}else{
		
			int val = *(stack + top2);
			top2++;
			flag = 1;
			return val;
		}
	}
}
int peek(int* stack){

	int s;
	printf("Enter a stack peek data 1/2\n");
	scanf("%d",&s);
	if(s == 1){
	
		if(top1 == -1){
		
			flag = 0;
			return -1;
		}else{
		
			int val = *(stack + top1);
			flag = 1;
			return val;

		}
	}else{
	
		if(top2 == size){
		
			flag = 0;
			return -1;
		}else{
		
			int val = *(stack + top2);
			flag = 1;
			return val;
		}
	}
}
void main(){

	printf("Enter a array size\n");
	scanf("%d",&size);

	top1 = -1;
        top2 = size;
	int stack[size];
	char choice;
	
	do{
	
		printf("1 :push\n");
		printf("2 :pop\n");
		printf("3 :peek\n");

		int ch ;
		printf("Enter a choice\n");
		scanf("%d",&ch);

		switch(ch){
		
			case 1: {
				  int ret = push(stack);
				  if(ret == -1)
					  printf("stack is overflow\n");
				}
				break;

			case 2:{
			         int ret = pop(stack);
				 if(flag == 0)
					 printf("stack is underflow\n");
				 else
					 printf("%d is popped\n",ret);
			       }
			       break;

			case 3:{
			         int ret = peek(stack);
				 if(flag == 0)
					 printf("stack is underflow\n");
				 else
					 printf("%d\n",ret);
			       }
			       break;

			default: printf("Wrong choice\n");
		}
		getchar();
		printf("Do you want continue\n");
		scanf("%c",&choice);
	}while(choice == 'Y' || choice == 'y');
}
