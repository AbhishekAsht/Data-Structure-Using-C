#include<stdio.h>
#include<stdlib.h>

typedef struct IPL {

	char pName[10];
	int pNo;
	struct IPL* next;
}ipl;

ipl* head = NULL;

void addNode(){

	ipl *newNode =(ipl*)malloc(sizeof(ipl));
	printf("Enter a pName\n");
	fgets(newNode->pName,6,stdin);

	printf("Enter a Player no\n");
	scanf("%d",&newNode->pNo);
	
	getchar();

	newNode->next = NULL;

	head = newNode;
}

void printll(){

	ipl* temp = head;

	while(temp != NULL){
	
		printf("| %s -> %d |",temp->pName,temp->pNo);
		temp = temp->next;
	}
}


void main(){

	addNode();
	addNode();
	addNode();
	printll();
}
