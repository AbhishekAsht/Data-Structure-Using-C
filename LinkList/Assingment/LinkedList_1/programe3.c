#include<stdio.h>
void* malloc(size_t);

typedef struct node{

	int data;
	struct node* next;
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

int count_num(int search){

	int count = 0;

	node* temp = head;

	while(temp != NULL){
	
		if(search == temp->data){
		
			count++;
		}
		temp = temp->next; 
	}

	return count;

}
void printll(){

	node* temp = head;

	while(temp->next != NULL){
	
		printf("|%d|->",temp->data);
		temp = temp->next;
	}

	printf("|%d|",temp->data);
	printf("\n");
}
void main(){

	int node;
	printf("Enter a node count\n");
	scanf("%d",&node);

	for(int i = 1; i<=node; i++){
	
		createNode();
	}

	printll();

	int num;
	printf("Enter a search num\n");
	scanf("%d",&num);

	int count = count_num(num);

	printf("data are %d times present in list\n",count);


}
