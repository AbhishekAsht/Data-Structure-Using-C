#include<stdio.h>
#include<stdlib.h>

typedef struct node{

	int data;
	struct node* next;
}node;
node* rear = NULL;
node* front = NULL;
int flag = 0;

node* createNode(){

	node* newNode = (node*)malloc(sizeof(node));
	if(newNode == NULL){

		printf("memory is full(heap)\n");
		exit(0);
	}
	printf("Enter a data\n");
	scanf("%d",&newNode->data);

	newNode->next = NULL;

	return newNode;
}

void enqueue(){

	node* newNode = createNode();

	if(front == NULL){
	
		rear = newNode;
		front = newNode;
	}else{
	
		rear->next = newNode;
		rear = newNode;
	}
}

int dequeue(){

	if(rear == NULL){
	
		flag = 0;
		return -1;
	}else{
	
		flag = 1;
		int val = front->data;
		if(rear == front){
		
			free(front);
			rear = NULL;
			front = NULL;
		}else{
		
			node* temp = front;
			front = front->next;
			free(temp);
		}
		return val;
	}
}

int frontp(){

	if(rear == NULL){
	
		flag = 0;
		return -1;
	}else{
	
		flag = 1;
		int val = (*front).data;
		return val;
	}
}

int printqueue(){

	if(rear == NULL){
	
		return -1;
	}
	node* temp = front;
	while(temp != NULL){
	
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}
void main(){

	char choice;

	do{
	
		printf("1 :enqueue\n");
		printf("2 :dequeue\n");
		printf("3 :front\n");
		printf("4 :printqueue\n");

		int ch;
		printf("Enter a choice\n");
		scanf("%d",&ch);

		switch(ch){
		
			case 1: enqueue();
				break;

			case 2: {
				  int ret = dequeue();
				  if(flag == 1)
					  printf("%d is dequeue\n",ret);
				  else
					  printf("Q is empty\n");
				}
				break;

			case 3: {
				  int ret = frontp();
				  if(flag == 1)
					  printf("%d\n",ret);
				  else
					  printf("Q is empty\n");
				}
				break;

			case 4: {
				  int ret = printqueue();
				  if(ret == -1)
					  printf("Q is empty\n");
				}
				break;

			default: printf("Wrong choice\n");
		}
		getchar();
		printf("Do you want Continue\n");
		scanf("%c",&choice);
	}while(choice == 'y' || choice == 'Y');
}
