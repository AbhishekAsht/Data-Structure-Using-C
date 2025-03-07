#include<stdio.h>
#include<stdlib.h>

typedef struct node{

	int a;
	struct node *next;
}node;

node *head = NULL;

void createNode(){

	node *newNode = (node*)malloc(sizeof(node));

	printf("Enter a data\n");
	scanf("%d",&newNode->a);

	newNode->next = NULL;

	if(head == NULL){
	
		head = newNode;
	}else{
	
		node* temp = head;
		while(temp->next != NULL){
		
			temp = temp->next;
		}
		temp->next = newNode;
	}
}
void sortLL(){

	node* temp = head;
	while(temp->next != NULL){
	

	}
}

void printLL(){

	node* temp = head;
	while(temp->next != NULL){
	
		printf("|%d|->",temp->a);
		temp = temp->next;
	}
	printf("|%d|\n",temp->a);
}
void main(){

	for(int i = 1; i<=4; i++){
	
		createNode();
	}
	//sortLL();
	printLL();
}
