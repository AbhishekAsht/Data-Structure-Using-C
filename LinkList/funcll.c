#include<stdio.h>
#include<stdlib.h>

typedef struct Demo{

	int data;
	struct Demo* next;
}demo;

demo* head = NULL;

demo* createNode(){

	demo* newNode = (demo*)malloc(sizeof(demo));

	printf("Enter a data\n");
	scanf("%d",&newNode->data);

	newNode->next = NULL;

	return newNode;
}

void addNode(){

	demo* newNode = createNode();

	if(head == NULL){
	
		head = newNode;
	}else{
	
		demo* temp = head;

		while(temp->next != NULL){
		
			temp = temp->next;
		}

		temp->next = newNode;
	}
}

void printll(){

	demo* temp = head;

	while(temp != NULL){
	
		printf("|%d|",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

void addFirst(){

	demo* newNode = createNode();

	if(head == NULL){
	
		head = newNode;
	}else{
	
		newNode->next = head;
		head = newNode;
	}
}

void addAtpos(int x,int a){

	demo* temp = head;

	demo* newNode;

	if(a > x){

		newNode = createNode();
	
		while(x - 2){
	
		 temp = temp->next;
		 x--;
	   }

		newNode->next = temp->next;
		temp->next = newNode;
	}else{
	
		printf("Wrong position\n");
	}

}

int countll(){

	demo* temp = head;

	int count = 0;

	while(temp != NULL){
	
		count++;
		temp = temp->next;
	}

	return count;

}

void main(){

	int node;
	printf("Enter add node\n");
	scanf("%d",&node);

	for(int i = 1; i<=node; i++){
	
		addNode();
	}

	countll();

	printll();

	addFirst();

	printll();

	int a = countll();

	int pos;
	printf("Enter a position\n");
	scanf("%d",&pos);

	addAtpos(pos,a);


}
