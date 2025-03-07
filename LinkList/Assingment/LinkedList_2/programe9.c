#include<stdio.h>
#include<stdlib.h>

typedef struct node{

	int data;
	struct node* next;
}node;

node* head = NULL;
node* head2 = NULL;

node* createNode(){

	node* newNode = (node*)malloc(sizeof(node));

	printf("Enter a data\n");
	scanf("%d",&newNode->data);

	newNode->next = NULL;

	return newNode;
}

int countNode(){

	node* temp = head;

	int count = 0;

	while(temp != NULL){
	
		count++;
		temp = temp->next;
	}

	return count;
}
int addNode(){

	node* newNode = createNode();

	if(head == NULL){
	
		head = newNode;
	}else{
	
		node* temp = head;

		while(temp->next != NULL){
		
			temp = temp->next;
		}

		temp->next = newNode;
	}

	return 0;

}
void printLL(){

	node* temp = head2;

	while(temp->next != NULL){
	
		printf("|%d|->",temp->data);
		temp = temp->next;
	}
	printf("|%d|",temp->data);
	printf("\n");
}
void printLL1(){

	node* temp = head;

	while(temp->next != NULL){
	
		printf("|%d|->",temp->data);
		temp = temp->next;
	}
	printf("|%d|",temp->data);
	printf("\n");
}

int c_alter_dest(){

	int count = countNode();
	int a = count,b = 1;
	node* temp = head;

	while(a){
		
		if(b % 2 != 0){
		
			if(head2 == NULL){

			node* newNode = (node*)malloc(sizeof(node));
			head2 = newNode;
			newNode->data = temp->data;
			temp = temp->next;
			a--;
			b++;

			}else{

			node* temp2 = head2;
			while(temp2->next != NULL){
			
				temp2 = temp2->next;
			}
			node* newNode = (node*)malloc(sizeof(node));
			temp2->next = newNode;
			newNode->data = temp->data;
			temp = temp->next;
			a--;
			b++;

			}	
		}else{
		
			temp = temp->next;
			a--;
			b++;
		}
		
		
	}


}	
void main(){


	int node;
	printf("Enter a source_list count\n");
	scanf("%d",&node);

	for(int i = 1; i<=node; i++){
	
		addNode();
	}

	printLL1();

	c_alter_dest();
	printf("destination_list \n");
	printLL();
}

