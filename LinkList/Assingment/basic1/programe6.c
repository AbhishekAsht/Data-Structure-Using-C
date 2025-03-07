#include<stdio.h>
#include<stdlib.h>
typedef struct demo{

	int data;

	struct demo* next;
}demo;

demo* head = NULL;

void createNode(){

	demo* Newnode = (demo*)malloc(sizeof(demo));

	printf("Enter a data\n");
	scanf("%d",&Newnode->data);

	Newnode->next = NULL;

	if(head == NULL){
	
		head = Newnode;
	}else{
	
		demo* ab = head;

		while(ab->next != NULL){
		
			ab = ab->next;
		}

		ab->next = Newnode;
	}
}

int printll(){

	demo* ab = head;

	if(head == NULL){
	
		printf("Empty list\n");

		return -1;
	}else{
	
		while(ab->next != NULL){
		
			printf("|%d|->",ab->data);
			ab = ab->next;
		}

		printf("|%d|",ab->data);

		printf("\n");
	}
}

int maxNode(){

	int max = 0;
	demo* temp = head;

	while(temp != NULL){
	
		if(max < temp->data)
		
			max = temp->data;

		temp = temp->next;
	}

	return max;
}
void main(){

	int node;

	printf("Enter a node\n");
	scanf("%d",&node);

	for(int i = 1; i<=node; i++){
	
		createNode();
	}

	printll();

	int max = maxNode();
	printf("%d is maximum of linkedlist\n",max);

}
