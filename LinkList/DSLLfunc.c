#include<stdio.h>
#include<stdlib.h>

typedef struct demo{

	struct demo* prev;
	int data;
	struct demo* next;
}node;

node* head = NULL;

node* createNode(){

	node* newNode =(node*)malloc(sizeof(node));

	newNode->prev = NULL;

	printf("Enter a data\n");
	scanf("%d",&newNode->data);

	newNode->next = NULL;

	return newNode;
}

int countNode(){

	node* temp = head;
	int count = 0;

	while(temp->next != head){
	
		temp = temp->next;
		count++;
	}
	count++;

	return count;
}

void addNode(){

	node* newNode = createNode();

	if(head == NULL){
	
		head = newNode;
		head->prev = head;
		head->next = head;
	}else{
	
		head->prev->next = newNode;
		newNode->prev = head->prev;
		newNode->next = head;
		head->prev = newNode;
	}
}

int addFirst(){

	node* newNode = createNode();

	if(head == NULL){
	
		head = newNode;
		head->prev = head;
		head->next = head;
	}else{
	
		newNode->next = head;
		newNode->prev = head->prev;
		head->prev = newNode;
		head = newNode;
		head->prev->next = head;
	}
}

int printDSLL(){

	if(head == NULL){
	
		printf("Empty List\n");
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

int addAtpos(int pos){

	int count = countNode();
	
	if(pos <= 0 || pos > count+1){
	
		printf("Invalid position\n");
		return -1;
	}else{
	
		if(pos == count+1){
		
			addNode();

		}else if(pos == 1){
		
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
			newNode->prev = temp;
			newNode->next->prev = newNode;
		}

		return 0;
	}
}

int delFirst(){

	if(head == NULL){
	
		printf("Empty List\n");
		return -1;	
	}else{	
		if(head->next == head){
		
			free(head);
			head = NULL;
		}else{

			
			head = head->next;
			head->prev = head->prev->prev;
			free(head->prev->next);
			head->prev->next = head;
		}

		return 0;
	}
}

int delLast(){

	if(head == NULL){
	
		printf("Empty List\n");
		return -1;
	}else{
	
		if(head->next == head){
		
			delFirst();
		}else{
		
			head->prev = head->prev->prev;
			free(head->prev->next);
			head->prev->next = head;
		}

	}

}

int delAtpos(int pos){

	int count = countNode();

	if(pos <= 0 || pos > count+1){
	
		printf("Invalid pos\n");
		return -1;
	}else{
	
		if(pos == 1)
			delFirst();

		else{
		
			node* temp = head;

			while(pos - 2){
			
				temp = temp->next;
				pos--;
			}
		
			temp->next = temp->next->next;
			free(temp->next->prev);
			temp->next->prev = temp;
		}
		return 0;
	}
}
void main(){

	printf("1 : addNode\n");
	printf("2 : addFirst\n");
	printf("3 : addAtpos\n");
	printf("4 : printDSLL\n");
	printf("5 : countNode\n");
	printf("6 : delFirst\n");
	printf("7 : delLast\n");
	printf("8 : delAtpos\n");

	char choice;

	do{
		int ch;
		printf("Enter a choice\n");
		scanf("%d",&ch);

		switch(ch){
		
			case 1: addNode();
				break;

			case 2: addFirst();
				break;

			case 3: {
				
					int pos;
					printf("Enter a position\n");
					scanf("%d",&pos);
					addAtpos(pos);
				}
				break;

			case 4: printDSLL();
				break;
				
			case 5: {int count = countNode();
				printf("count list is = %d\n",count);}
				break;

			case 6: delFirst();
				break;

			case 7: delLast();
				break;

			case 8: {
				
					int pos1;
					printf("Enter a position\n");
					scanf("%d",&pos1);
					delAtpos(pos1);
				}

			default: printf("Wrong choice\n");
		}
		getchar();
		printf("Do you want continue\n");
		scanf("%c",&choice);

	}while(choice == 'Y' || choice == 'y');
}
