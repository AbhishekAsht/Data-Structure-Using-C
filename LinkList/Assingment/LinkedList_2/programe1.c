#include<stdio.h>
#include<stdlib.h>

typedef struct node{

	int data;
	struct node* next;
}node;

node* head = NULL;

void createNode(){

	node* newNode =(node*)malloc(sizeof(node));

	printf("Enter a data\n");
	scanf("%d",&newNode->data);

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
void printLL(){

	node* temp = head;

	while(temp->next != NULL){
	
		printf("|%d|->",temp->data);
		temp = temp->next;
	}
	printf("|%d|",temp->data);
	printf("\n");
}
void all_occurence(int num){

	node* temp = head;
	int count = 0;
	while(temp != NULL){
	
		if(num == temp->data){

			count++;
		}
		temp = temp->next;
	}
	printf("count is = %d\n",count);
}

void main(){

	int node;
	printf("Enter a node count\n");
	scanf("%d",&node);

	for(int i = 1; i<=node; i++){
	
		createNode();
	}

	printLL();

	int num;
	printf("Enter a number\n");
	scanf("%d",&num);
	all_occurence(num);
}
