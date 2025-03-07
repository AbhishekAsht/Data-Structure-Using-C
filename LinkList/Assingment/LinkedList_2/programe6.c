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
	}
}
int countNode() {

	node* temp = head;
	int count;

	while(temp->next != NULL){
	
		count++;
		temp = temp->next;
	}

	return count;

}

int dest_c(int num){

	int count = countNode();

	node* temp = head;

	while(num){

		if(head2 == NULL){

			node* newNode = (node*)malloc(sizeof(node));
			head2 = newNode;
			newNode->data = temp->data;
			temp = temp->next;
			num--;

		}else{

			node* temp2 = head2;
			while(temp2->next != NULL){
			
				temp2 = temp2->next;
			}
			node* newNode = (node*)malloc(sizeof(node));
			temp2->next = newNode;
			newNode->data = temp->data;
			temp = temp->next;
			num--;
		}
	}
	return 0;
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

void printLL2(){

	node* temp = head2;

	while(temp->next != NULL){
	
		printf("|%d|->",temp->data);
		temp = temp->next;
	}

	printf("|%d|",temp->data);
	printf("\n");
}
void main(){

	int node;
	printf("Enter a source_list count\n");
	scanf("%d",&node);

	for(int i = 1; i<=node; i++){
	
		addNode();
	}
	
	printLL();
	int num;
	printf("Enter a number\n");
	scanf("%d",&num);
	dest_c(num);
	printLL2();
}
