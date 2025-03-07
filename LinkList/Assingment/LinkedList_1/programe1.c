#include<stdio.h>
#include<stdlib.h>

typedef struct node{

	int data;
	struct node *next;
}node;

node* head = NULL;

void createNode(){

	node* newNode = (node*)malloc(sizeof(node));

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

void firstoccurence(int search){

	node* temp = head;
	int count = 0;

	while(temp != NULL){
	
		if(search == temp->data){
		
			count++;
			break;
		}
		count++;
		temp = temp->next;
	}
	printf("First occurence is = %d\n",count);

}
void main(){

	int node;

	printf("Enter a node\n");
	scanf("%d",&node);

	for(int i = 1; i<=node; i++){
	
		createNode();
	}

	int search;
	printf("Enter a number search\n");
	scanf("%d",&search);

	firstoccurence(search);
}
