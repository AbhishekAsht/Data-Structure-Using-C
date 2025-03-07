#include<stdio.h>
#include<stdbool.h>

int size = 0;
int top = -1;
int flag = 0;

bool isFull(){

	if(top == size - 1)

		return true;
	else
		return false;
}
int push(int* stack){

	if(isFull()){
	
		return -1;
	}else{
	
		top++;
		printf("Enter a data\n");
		scanf("%d",stack+top);
		return 0;
	}

}

bool isEmpty(){

	if(top == -1)

		return true;
	else
		return false;
}

int pop(int *stack){

	if(isEmpty()){
	
		flag = 0;
		return -1;
	}else{
	
		int val = *(stack+top);
		top--;
		flag = 1;
		return val;
	}
}

int peek(int* stack){

	if(top == -1){
	
		flag = 0;
		return -1;
	}else{
	
		int val = *(stack+top);
		flag = 1;
		return val;
	}
}

void main(){

	printf("Enter a stacksize\n");
	scanf("%d",&size);

	int stack[size];
	char choice;

	do{
	
		printf("1: push\n");
		printf("2: pop\n");
		printf("3: peek\n");
		printf("4: isEmpty\n");
		printf("5: isFull\n");

		int ch;
		printf("Enter a choice\n");
		scanf("%d",&ch);

		switch(ch){
		 
			case 1 :{
				   int ret = push(stack);
				   if(ret == -1)
					   printf("stack is Full\n");
				}
				break;


			case 2 :{
			          int val = pop(stack);
				  if(flag == 0)
					  printf("stack is Empty\n");
				  else
					  printf("%d is popped\n",val);
			       }
			       break;

		       case 3 :{
				  int val = peek(stack);
				  if(flag == 0)
					  printf("stack is Empty\n");
				  else
					  printf("%d\n",val);
			       }
			       break;

		       case 4 :{
			          bool ret = isEmpty();
				  if(ret)
					  printf("stack is empty\n");
				  else
					  printf("stack is not empty\n");
			       }
			       break;

		      case 5 :{
			      
				  bool ret = isFull();
				  if(ret)
					  printf("stack is Full\n");
				  else
					  printf("stack is not Full\n");
			      }
			      break;

		      default: 
			      printf("Wrong choice\n");
		}
		getchar();
		printf("Do you want continue\n");
		scanf("%c",&choice);
	}while(choice == 'Y' || choice == 'y');
	
}
