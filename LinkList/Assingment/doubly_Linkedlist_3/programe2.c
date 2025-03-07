#include<stdio.h>
#include<stdlib.h>

typedef struct node{

	struct node *prev;
	int data;
	struct node *next;
}node;

node* head = NULL;
node* createNode(){

	node* newNode =(node*)malloc(sizeof(node));

	newNode->prev = NULL;

	printf("Enter a data\n");
	scanf("%d",&newNode->data);

	newNode->next = NULL;

	return newNode;
}
void addNode(){

	node* newNode = createNode();

	if(head == NULL){
	
		head = newNode;
	}else{
	
		node* temp = head;

		while(temp->next != NULL){
		
			temp = temp->next;
		}
		temp->next = newNode;
		newNode->prev = temp;
	}
}

void printDLL(){

	node* temp = head;

	while(temp->next != NULL){
	
		printf("|%d|->",temp->data);
		temp = temp->next;
	}
	printf("|%d|",temp->data);
	printf("\n");
}

int count_number_list(int num){

	node* temp = head;
	int count = 0;

	while(temp->next != NULL){
	
		if(num == temp->data){
		
			count++;
		}
		temp = temp->next;
	}

	return count;
}
void main(){

	int node;
	printf("Enter a node count\n");
	scanf("%d",&node);

	for(int i = 1; i<=node; i++){
	
		addNode();
	}
	printDLL();
	int num;
	printf("Enter a number\n");
	scanf("%d",&num);
	int  count = count_number_list(num);
	printf("The number present %d times\n",count);
}

