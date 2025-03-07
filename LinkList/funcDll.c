#include<stdio.h>
void* malloc(size_t);
void free(void*);

typedef struct demo{

	struct demo* prev;
	int data;
	struct demo* next;
}demo;

demo* head = NULL;

demo* createNode(){

	demo* newNode = (demo*) malloc(sizeof(demo));

	newNode->prev = NULL;

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
		newNode->prev = temp;
	}

}

int countll(){

	demo* temp = head;

	int count = 0 ;
	while(temp != NULL){

		count++;
		temp = temp->next;
	}

	return count;
}

void addFirst(){

	demo* newNode = createNode();

	if(head == NULL){
	
		head = newNode;
	}else{
	
		newNode->next = head;
		newNode->prev = newNode;
		head = newNode;
	}
}

int addAtpos(int pos){

	int count = countll();

	demo* newNode = createNode();

	if(pos <= 0 || pos >= count+1){
	
		printf("invalid position no\n");

		return -1;

	}else{
	
		if(pos == count){
		
			addNode();

		}else if(pos == 1){
		
			addNode();
		}else{
		
			demo* temp = head;

			while(pos - 2){
			
				temp = temp->next;
				pos--;
			}

			newNode->next = temp->next;
			newNode->prev = temp;
			temp->next->prev = newNode;
			temp->next = newNode;
		}
	}
}

void printll(){

	demo* temp = head;

	while(temp->next != NULL){
	
		printf("|%d|->",temp->data);
		temp = temp->next;
	}
	printf("|%d|",temp->data);
	printf("\n");
}
void main(){

	printf("1.addNode\n");
	printf("2.printll\n");
	printf("3.addfirst\n");
	printf("4.addlast\n");
	printf("5.addAtpos\n");
	printf("6.Delfirst\n");
	printf("7.delLast\n");
	printf("8.delAtpos\n");

	char choice;

	do{
	
		int ch;
		printf("Enter a choice\n");
		scanf("%d",&ch);

		switch(ch){
		
			case 1: addNode();
				break;

			case 2: printll();
				break;

			case 3: addFirst();

			case 4: addNode();

			case 5: {
					int pos;
					printf("Enter a position\n");
					scanf("%d",&pos);
					addAtpos(pos);
				}

			default :printf("Wrong choice\n");
		}
	
		getchar();
		printf("Do you want continue\n");
		scanf("%c",&choice);

	}
	while(choice == 'y' || choice == 'Y');
}
