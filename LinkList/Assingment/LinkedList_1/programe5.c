int printf(const char* restrict_format,...);
int scanf(const char* restrict_format,...);
#include<stdlib.h>

typedef struct node{

	int data;
	struct node* next;
}node;

node* head  = NULL;

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
void sum_data(){

	int sum;
	node* temp = head;

	while(temp != NULL){

		 sum = 0;

		int data = temp->data;

		while( data != 0){
		
			int rem = data % 10;
			sum = sum + rem;
			data = data/10;
		}
		printf("|%d|->",sum);
		temp = temp->next;
	}

	//printf("|%d|",sum);
	printf("\n");
}
void main(){

	int node;
	printf("Enter a node\n");
	scanf("%d",&node);

	for(int i = 1; i<=node; i++){
	
		createNode();
	}

	printLL();

	sum_data();

	printLL();
}
