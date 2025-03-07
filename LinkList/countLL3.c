#include<stdio.h>
#include<stdlib.h>

typedef struct movie{

	char mName[20];
	int count;

	struct movie* next;
}mv;

mv *head = NULL;

mv* createNode(){

	mv* newNode = (mv*)malloc(sizeof(mv));

	getchar();

	char ch ;
	int i = 0;

	printf("Enter a mName\n");
	while((ch = getchar()) != '\n'){
	
		(*newNode).mName[i] = ch;
		i++;
	}
	printf("Enter a Count\n");
	scanf("%d",&newNode->count);

	newNode->next = NULL;

	return newNode;
}

void addNode(){

	mv* newNode = createNode();

	if(head == NULL){
	
		head = newNode;
	}else{
	
		mv* temp = head;

		while(temp->next != NULL){
		
			temp = temp->next;
		}

		temp->next = newNode;
	}
}

void printll(){

	mv* temp = head;

	while(temp != NULL){
	
		printf("|%s->",temp->mName);
		printf("%d|",temp->count);
		temp = temp->next;
	}
	printf("\n");
}

void countll(){

	mv* temp = head;

	int count = 0;

	while(temp != NULL){
	
		count++;

		temp = temp->next;
	}

	printf("Count is = %d\n",count);
}

void main(){

	int node;

	printf("Enter a createNode\n");
	scanf("%d",&node);

	for(int i = 1; i<=node; i++){
	
		addNode();
	}

	printll();

	countll();
}
