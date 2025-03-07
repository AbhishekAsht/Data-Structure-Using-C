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

int countN(){

	demo* temp = head;
	int count = 0;

	while(temp != NULL){
		count++;
		temp = temp->next;
	}
	return count;	
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

void addFirst(){

	demo* newNode = createNode();

	if(head == NULL){
	
		head = newNode;
	}else{
	
		newNode->next = head;
		head = newNode;
	}
}

void addAtpos(int pos){

	int c = countN();
	demo* temp = head;

	if(pos <= 0 || pos > c){
	
		printf("invalid position no\n");
	}else{
	
		if(pos == 1){
		
			addFirst();

		}else if(pos == c){
		
			addNode();
		}else{
			demo* newNode = createNode();
		
			while(pos - 2){
			
				temp = temp->next;
				pos--;
			}

			newNode->next = temp->next;
			temp->next = newNode;
		}
	}
}

int deleteFirst(){

	int count = countN();

	if(head == NULL){

		printf("nothing to delete\n");
		return -1;

	}else if(count == 1){

		free(head);
		head = NULL;
	}else{
	
		demo* temp = head;
		head = head->next;
		free(temp);
	}
}

int deleteLast(){
	
	if(head == NULL){
	
		printf("nothing delete list is empty\n");
		return -1;
	}else{

	demo* temp = head;

	while(temp->next->next != NULL){
	
		temp = temp->next;
	}

	free(temp->next);
	temp->next = NULL;

	return 0;
	}
}
int printll(){
	
	if(head == NULL){
	
		printf("LinkedList empty\n");
		return -1;
	}else{

	demo* temp = head;

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

	printf("1.addNode\n");
	printf("2.addFirst\n");
	printf("3.addAtpos\n");
	printf("4.printll\n");
	printf("5.deleteFirst\n");
	printf("6.deleteLast\n");


	char c;

	do{
		int ASA_ch;

		printf("Enter a ASA_choice\n");
		scanf("%d",&ASA_ch);

		switch(ASA_ch){
		
			case 1: addNode();
				break;

			case 2: addFirst();
				break;

			case 3: {
				int pos;
				printf("Enter a pos\n");
				scanf("%d",&pos);
				addAtpos(pos);
				}
				break;

			case 4: printll();
				break;

			case 5: deleteFirst();
				break;

			case 6: deleteLast();
				break;

			default : printf("Wrong ASA_choice\n");
		}
		getchar();
		printf("Do You Want Continue\n");
		scanf("%c",&c);

	}while(c == 'y' || c == 'Y');
}
