#include<stdio.h>
#include<stdlib.h>

typedef struct Employee{

	char eName[20];
	int id;
	struct Employee* next;
}emp;

emp* head = NULL;

void addNode(){

	emp* newNode = (emp*) malloc (sizeof(emp));

	getchar();

	printf("Enter a name :\n");

	char ch;
	int i = 0;

	while((ch = getchar()) != '\n'){
	
		(*newNode).eName[i] = ch;
		i++;
	}

	printf("Enter a id\n");
	scanf("%d",&newNode->id);

	newNode->next = NULL;

	if(head == NULL){
	
		head = newNode;
	}else{
	
		emp* temp = head;

		while(temp->next != NULL){
		
			temp = temp->next;
		}

		temp->next = newNode;
	}
}

void printll(){

	emp* temp = head;

	while(temp != NULL){
	
		printf("|%s->",temp->eName);
		printf("%d|",temp->id);
		temp = temp->next;
	}
	printf("\n");
}
void main(){

	int node;
	printf("Enter a node\n");
	scanf("%d",&node);

	for(int i = 1; i<=node; i++){
	
		addNode();
	}

	printll();
}
