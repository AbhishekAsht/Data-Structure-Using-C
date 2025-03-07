#include<stdio.h>
#include<stdlib.h>

typedef struct node{

	int data;
	struct node* next;
}node;

node* head = NULL;
node* head2 = NULL;

node* createNode(){

	node* newNode = (node*)malloc(sizeof(node));

	printf("Enter a data\n");
	scanf("%d",&newNode->data);

	newNode->next = NULL;

	return newNode;
}

int countNode(){

	node* temp = head;

	int count = 0;

	while(temp != NULL){
	
		count++;
		temp = temp->next;
	}

	return count;
}
int addNode(){

	node* newNode = createNode();

	if(head == NULL){
	
		head = newNode;
	}else{
	
		node* temp = head;

		while(temp->next != NULL){
		
			temp = temp->next;
		}

		temp->next = newNode;
	}

	return 0;

}
void printLL(){

	node* temp = head2;

	while(temp->next != NULL){
	
		printf("|%d|->",temp->data);
		temp = temp->next;
	}
	printf("|%d|",temp->data);
	printf("\n");
}
void printLL1(){

	node* temp = head;

	while(temp->next != NULL){
	
		printf("|%d|->",temp->data);
		temp = temp->next;
	}
	printf("|%d|",temp->data);
	printf("\n");
}

int c_dest(int num){

	int count = countNode();
	int a = count;
	node* temp = head;
	node* temp2 = head2;
	while(num != a){
	
		temp = temp->next;
		a--;
	}

	temp2 = temp;
	head2 = temp2;

}	
void main(){


	int node;
	printf("Enter a source_list count\n");
	scanf("%d",&node);

	for(int i = 1; i<=node; i++){
	
		addNode();
	}

	printLL1();

	int num;
	printf("Enter a number\n");
	scanf("%d",&num);
	c_dest(num);
	printf("destination_list \n");
	printLL();

	printLL1();
}

