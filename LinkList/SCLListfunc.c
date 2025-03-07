#include<stdio.h>
#include<stdlib.h>

typedef struct node{

	int data;
	struct node* next;
}node;

node* head = NULL;

node* createNode(){

	node* newNode =(node*)malloc(sizeof(node));

	printf("Enter a data\n");
	scanf("%d",&newNode->data);

	newNode->next = NULL;

	return newNode;
}

void addNode(){

	node* newNode = createNode();

	if(head == NULL){
	
		head = newNode;
		newNode->next = head;
	}else{
	
		node* temp = head;

		while(temp->next != head){
		
			temp = temp->next;
		}
		temp->next = newNode;
		newNode->next = head;
	}

}

int countNode(){

	node* temp = head;
	int count = 0;

	while(temp->next != head){
	
		count++;
		temp = temp->next;
	}
	count++;

	return count;
}

void addFirst(){

	node* newNode = createNode();

		node* temp = head;
		while(temp->next != head){
		
			temp = temp->next;
		}
		newNode->next = head;
		head = newNode;
		temp->next = newNode;
}

int addAtpos(int pos){

	int count = countNode();

	if(pos <= 0 || pos > count+1){
	
		printf("Invalid position\n");
		return -1;
	}else{
	
		if(pos == count+1){
		
			addNode();
		}
		else if(pos == 1){
		
			addFirst();
		}else{
		
			node* newNode = createNode();
			node* temp = head;

			while(pos - 2){
			
				temp = temp->next;
				pos--;
			}
			newNode->next = temp->next;
			temp->next = newNode;
		}

		return 0;
	}
}

int delFirst(){

	if(head == NULL){
	
		printf("Empty list\n");
		return -1;
	}else{
	
		if(head->next == head){
		
			free(head);
			head = NULL;
		}else{
		
			node* temp = head;
			while(temp->next != head){
			
				temp = temp->next;
			}
			head = head->next;
			free(temp->next);
			temp->next = head;
		}
	}
} 

int delLast(){

	if(head == NULL){
	
		printf("Empty list\n");
		return -1;
	}else{
	
		if(head->next == head){
		
			free(head);
			head = NULL;
		}else{
		
			node* temp = head;

			while(temp->next->next != head){
			
				temp = temp->next;
			}
			node* temp2 = temp->next;
			temp->next = head;
			free(temp2);
		}

		return 0;
	}
}

int delAtpos(int pos){

	int count = countNode();

	if(pos <= 0 || pos > count){
	
		printf("Invalid position\n");
		return -1;
	}else{
	
		if(pos == 1){
		
			free(head);
			head = NULL;

		}else{
			node* temp = head;

			while(pos - 2){
			
				temp = temp->next;
				pos--;
			}
			node* temp2 = temp->next;
			temp->next = temp->next->next;
			free(temp2);
		}
		return 0;
	}
}
int printLL(){
	if(head == NULL){
	
		printf("Empty list\n");
		return -1;
	}else{
	
		node* temp = head;

		while(temp->next != head){	

		printf("|%d|->",temp->data);
		temp = temp->next;

		}
		printf("|%d|",temp->data);
		printf("\n");
		return 0;
	}
}
void main(){

	printf("1 :addNode\n");
	printf("2 :addFirst\n");
	printf("3 :addAtpos\n");
	printf("4 :printLL\n");
	printf("5 :delFirst\n");
	printf("6 :delAtpos\n");
	printf("7 :delLast\n");
	printf("8 :CountNode\n");

		char choice;
	do{
	
		int ch;
		printf("Enter a choice\n");
		scanf("%d",&ch);

		switch(ch){
		
			case 1 : addNode();
				 break;

			case 2 : addFirst();
				 break;

			case 3 : {
					 int pos;
					 printf("Enter a position\n");
					 scanf("%d",&pos);
					 addAtpos(pos);
					 
				 }
				 break;

			case 4 : printLL();
				 break;

			case 5 : delFirst();
				 break;

			case 6 : {
				 
					 int pos1;
					 printf("Enter a pos\n");
					 scanf("%d",&pos1);
					 delAtpos(pos1);
				 }
				 break;

			case 7 : delLast();
				 break;

			case 8 :
				 {
					 int count = countNode();
					 printf("Count is node = %d\n",count);
					 break;
				 }
				

			default : printf("Wrong choice\n");

		}
		getchar();
		printf("do you want continue\n");
		scanf("%c",&choice);

	}while(choice == 'y' || choice == 'Y');

}
