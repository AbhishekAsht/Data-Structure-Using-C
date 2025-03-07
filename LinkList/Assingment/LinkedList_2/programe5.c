#include<stdio.h>
#include<stdlib.h>

typedef struct node{

	int data;
	struct node* next;
}node;

node* head1 = NULL;
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

	if(head1 == NULL){
	
		head1 = newNode;
	}else{
	
		node* temp = head1;

		while(temp->next != NULL){
		
			temp = temp->next;
		}

		temp->next = newNode;
	}
}
void addNode2(){

	node* newNode = createNode(); 

	if(head2 == NULL){
	
		head2 = newNode;
	}else{
	
		node* temp = head2;

		while(temp->next != NULL){
		
			temp = temp->next;
		}

		temp->next = newNode;
	}
}
void printLL1(){

	node* temp = head1;
	printf("source list:\n");
	while(temp->next != NULL){
	
		printf("|%d|->",temp->data);
		temp = temp->next;
	}
	printf("|%d|",temp->data);
	printf("\n\n");
}
void printLL2(){

	node* temp = head2;

	printf("destination list:\n");
	while(temp->next != NULL){
	
		printf("|%d|->",temp->data);
		temp = temp->next;
	}
	printf("|%d|",temp->data);
	printf("\n\n");
}
void concate_list_n(int start,int end){

	node* temp1 = head1;
	node* temp2 = head2;
	int count = 1;

	while(temp2->next != NULL){
	
		temp2 = temp2->next;
	}

	while(start - 1){

		temp1 = temp1->next;
		count++;
		start--;
	}

	while(count != end + 1){
	
		node* newNode = (node*)malloc(sizeof(node));
		temp2->next = newNode;
		newNode->data = temp1->data;
		temp1 = temp1->next;
		temp2 = temp2->next;
		count++;
	}
}
void main(){

	int node,node1;
	printf("Enter a source_list node count:\n");
	scanf("%d",&node);
	for(int i = 1; i<=node; i++){
	
		addNode();
	}

	printf("Enter a destination_list node count:\n");
	scanf("%d",&node1);
	for(int i = 1; i<=node1; i++){
	
		addNode2();
	}

	printLL1();
	printLL2();
	int start,end;
	printf("Enter a start number\n");
	scanf("%d",&start);
	printf("Enter a end number\n");
	scanf("%d",&end);
	concate_list_n(start,end);
	printLL2();
}
