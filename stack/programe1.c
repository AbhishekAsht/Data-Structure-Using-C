#include<stdio.h>

int top = -1;
int size = 0;

int push(int* stack){

	if(top == size-1){
	
		printf("stack is overflow\n");
		return -1;
	}else{
	
		top++;
		printf("Enter a data\n");
		scanf("%d",stack + top);
		return 0;
	}
}
int pop(int *stack){

	if(top == -1){
	
		printf("stack is underflow\n");
		return -1;
	}else{
	
		int ret = *(stack+top);
		top--;
		return ret;
	}
}
int peek(int *stack){

	if(top == -1){
	
		printf("Stack Underflow\n");
		return -1;

	}else{


		return *(stack+top);

	}

}

void main(){

	printf("Enter a arrsize\n");
	scanf("%d",&size);

	int stack[size];

	char choice;

	do{
	
		printf("1: push\n");
		printf("2: pop\n");
		printf("3: peek\n");

		int ch;
		printf("Enter a choice\n");
		scanf("%d",&ch);

		switch(ch){
		
			case 1: push(stack);
				break;

			case 2: {
				
				int ret = pop(stack);
				if(ret != -1)
				printf("%d poped\n",ret);

				}
				break;

			case 3:{
			       	int data = peek(stack);
				if(data != -1)
				printf("print data = %d\n",data);
			       }
				break;

			default: printf("Wrong choice\n");
		}
		getchar();
		printf("Do you want continue\n");
		scanf("%c",&choice);

	}while(choice == 'Y' || choice == 'y');
}
