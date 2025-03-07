#include<stdio.h>
#include<stdlib.h>

typedef struct node{

	int data;
	struct node* next;
}node;

int nodeCount = 0;
int count = 0;
node* head = NULL;

node* createNode(){

	node* newNode =(node*)malloc(sizeof(node));
	printf("enter a data\n");
	scanf("%d",&newNode->data);

	newNode->next = NULL;
	count++;

	return newNode;
}
void addFirst(){

	node* newNode = createNode();

	if(head == NULL){
	
		head = newNode;
	}else{
	
		newNode->next = head;
		head = newNode;
	}
}
void addNode(){
	
		node* newNode = createNode();

		if(head == NULL){

			head = newNode;
		}else{
		
			node* temp1 = head;
			node* temp2 = head;

			while(temp1 != NULL){
			
				if(temp1->data < temp1->next->data){

				   temp1->next = newNode;

				}else{
				
					addFirst();
				}
			}
		}
}
void main(){

	printf("Enter a node\n");
	scanf("%d",&nodeCount);

	char choice;

	do{
	
		printf("1: addnode\n");
		printf("2: delnode\n");
		printf("3: printnode\n");
		int ch;

		printf("Enter a choice\n");
		scanf("%d",&ch);

		switch(ch){
		
			case 1: {
				int ret = addNode();
				if(ret == -1)
					printf("queue is full\n");
				}
				break;

			default: printf("Wrong choice\n");
		}
		getchar();
		printf("Do you want continue\n");
		scanf("%c",&choice);
	}while(choice == 'y' || choice == 'Y');
	

}
