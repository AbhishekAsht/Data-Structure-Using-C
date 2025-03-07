#include<stdio.h>
#include<stdlib.h>

typedef struct node{

	struct node *prev;
	int data;
	struct node *next;
}node;

node* head = NULL;

void createNode(){

	node* newNode =(node*)malloc(sizeof(node));

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
		newNode->prev = temp;
		temp->next = newNode;
	}
}

void palidromecheck(){

	node* temp = head;
	int sum,count = 0,flag = 0;

	while(temp != NULL){
	
		sum = 0;
		int data = temp->data;
		while(data != 0){
		
			int rem = data % 10;
			sum = (10*sum)+rem;
			data = data/10;
		}
		count++;
		if(sum == temp->data)
			printf("palidrome found %d\n",count);

		temp = temp->next;
	}
}
void printLL(){

	node* temp = head;
	while(temp->next != NULL){
	
		printf("|%d|->",temp->data);
		temp = temp->next;
	}
	printf("|%d|\n",temp->data);
}
void main(){

	int node;
	printf("Enter a nodeCount\n");
	scanf("%d",&node);

	for(int i = 1; i<=node; i++){
	
		createNode();
	}

	printLL();

	palidromecheck();

}
