#include<stdio.h>
#include<stdlib.h>

typedef struct node{

	struct node* prev;
	char str[10];
	struct node* next;
}node;

node* head = NULL;

void createNode(){

	node* newNode =(node*)malloc(sizeof(node));

	newNode->prev = NULL;

	printf("Enter a string\n");
	int i;
	char ch;
	while((getchar() = ch) != '\n'){
	
		(newNode*).str[i] = ch;
		i++;
	}

	newNode->next = NULL;

	if(head == NULL){
	
		head = newNode;
	}else{
	
		node* temp = head;
		while(temp->next != NULL){
		
			temp = temp->next;
		}
	}
}
void main(){

	int node;
	printf("Enter a nodeCount\n");
	scanf("%d",&node);

	for(int i = 1; i<=node; i++){
	
		createNode();
	}
}
