#include<stdio.h>
#include<stdlib.h>

typedef struct node{

	struct node* prev;
	int data;
	struct node* next;
}node;

node* head = NULL;

void createNode(){

	node* newNode = (node*)malloc(sizeof(node));

	newNode->prev = NULL;

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
		newNode->prev = temp;
	}

}
int countNode(){

	if(head == NULL){
	
		printf("Empty list\n");
		return -1;
	}else{
	
		node* temp = head;
		int count = 0;

		while(temp != NULL){
		
			count++;
			temp = temp->next;

		}
		return count;
	}
}
void reverseLL(){

	int count = countNode();

	node* temp1 = head;
	node* temp2 = head;

	while(temp2->next != NULL){
	
		temp2 = temp2->next;
	}

 	int a = count/2;

	while(a){
	
		int temp;

		temp = temp2->data;
		temp2->data = temp1->data;
		temp1->data = temp;

		temp1 = temp1->next;
		temp2 = temp2->prev;

		a--;
	}
}
int printLL(){

	if(head == NULL){
	
		printf("Empty list\n");
		return -1;
	}else{
	
		node* temp = head;

		while(temp->next != NULL){
			
			printf("|%d|->",temp->data);
			temp = temp->next;
		}

		printf("|%d|",temp->data);
		printf("\n");

		return 0;
	}
}
void main(){

	int node;

	printf("Enter a node count\n");
	scanf("%d",&node);

	for(int i = 1; i<=node; i++){
	
		createNode();
	}
	printLL();
	
	int count = countNode();
	printf("node is count = %d\n",count);

	reverseLL();

	printLL();
}
