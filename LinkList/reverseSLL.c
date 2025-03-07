#include<stdio.h>
void* malloc(size_t);

typedef struct node{

	int data;
	struct node* next;
}node;

node *head = NULL;

void createNode(){

	node* newNode =(node*)malloc(sizeof(node));

	printf("Enter a data\n");
	scanf("%d",&newNode->data);

	newNode->next = NULL;

	if(head == NULL){
	
		head = newNode;
	}else{
	
		node* ab = head;

		while(ab->next != NULL){
		
			ab = ab->next;
		}

		ab->next = newNode;
	}
}
int countNode(){

	if(head == NULL){
	
		printf("empty list\n");
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

	int a = count - 2,b = count/2, c = count - 1;
	
	while(b){

		while(c){
		
			temp2 = temp2->next;
			c--;
		}

		int temp;
		temp = temp1->data;
		temp1->data = temp2->data;
		temp2->data = temp;
	
		temp1 = temp1->next;
		temp2 = head;
		c = a--;
		b--;

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

	printf("node count is = %d\n",count);

	reverseLL();

	printLL();

}
