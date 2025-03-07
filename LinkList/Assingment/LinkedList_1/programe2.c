#include<stdio.h>
#include<stdlib.h>
struct node{

	int data;
	struct node *node;
};
typedef struct node node;

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
void main(){

	int node;

	printf("Enter a node count\n");
	scanf("%d",&node);

	for(int i = 1; i<=node; i++){
	
		createNode();
	}
} 
