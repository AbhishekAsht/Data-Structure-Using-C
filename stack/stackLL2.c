#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct demo{

	int data;
	struct demo *next;
}node;

node *head = NULL;
node *top = NULL;
int flag = 0;
int countNode = 0;

int elecount(){

	node* temp = head;
	int count = 0;

	while(temp != NULL){
	
		count++;
		temp = temp->next;
	}

	return count;
}

node* createNode(){

	node* newNode = (node*)malloc(sizeof(node));

	printf("Enter a data\n");
	scanf("%d",&newNode->data);

	newNode->next = NULL;

	return newNode;
}

void addNode(){

	node* newNode = createNode();

	if(head == NULL){
	
		head = newNode;
		top = newNode;
	}else{
	
		node* temp = head;
		while(temp->next != NULL){
		
			temp = temp->next;
		}
		temp->next = newNode;
		top = newNode;
	}
}

int push(){

	if(elecount() == countNode){
	
		return -1;
	}else{
	
		addNode();
		return 0;
		
	}
	
}

int pop(){

	if(top == NULL){
	
		flag = 0;
		return -1;
	}else{
	
		if(head == top){
		
			int val = head->data;
			free(top);
			head = NULL;
			top = NULL;
			return val;
			flag = 1;
		}else{
		
			node* temp = head;

			while(temp->next->next != NULL){
		
			temp = temp->next;
		}
		int var = temp->next->data;
		free(top);
		top = NULL;
		temp->next = NULL;
		top = temp;
		flag = 1;
		return var;
		}
	}

}

int peek(){

	if(top == NULL){
	
		return -1;
		flag = 0;
	}else{
	
		int var = top->data;
		flag = 1;
		return var;
	}
}

void main(){

	char choice;
	printf("Enter a stackcount\n");
	scanf("%d",&countNode);

	do{
		printf("1 :push\n");
		printf("2 :pop\n");
		printf("3 :peek\n");

		int ch;
		printf("Enter a choice\n");
		scanf("%d",&ch);

		switch(ch){
		
			case 1: {
				  int ret = push();
				  if(ret == -1)
					  printf("stack is overFlow\n");
				}
				break;

			case 2: {
				int ret = pop();
				  if(flag == 0)
					  printf("stack is empty\n");
				  else
					  printf("%d is popped\n",ret);
				}
				break;

			case 3:{
			       	int ret = peek();
				if(flag == 0)
					printf("stack is empty\n");
				else
					printf("%d\n",ret);
			       }
			       break;

			default: printf("Wrong Choice\n");

		}
		getchar();
		printf("Do you want continue\n");
		scanf("%c",&choice);
	}while(choice == 'Y' || choice == 'y');
}
