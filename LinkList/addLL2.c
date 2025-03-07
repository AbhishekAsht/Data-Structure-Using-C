#include<stdio.h>
//void malloc(size_t,);
#include<stdlib.h>
typedef struct OTT{

	char pName[20];
	int user;
	struct OTT* next;
}ott;

ott* createNode(ott** head){

	ott* newNode = (ott*)malloc(sizeof(ott));

	getchar();

	printf("Enter a pName\n");
	char ch; int i = 0;

	while((ch = getchar()) != '\n'){
	
		(*newNode).pName[i] = ch;
		i++;
	}

	printf("Enter a user\n");
	scanf("%d",&(*newNode).user);

	newNode->next = NULL;

	return newNode;
}

void addNode(ott** head){

	ott* newNode = createNode(head);

	if(*head == NULL){
	
		*head = newNode;

	}else{
	
		ott* temp = *head;

		while(temp->next != NULL){
		
			temp = temp->next;
		}

		temp->next = newNode;
	}
}

void printll(ott** head){

	ott* temp = *head;

	while(temp != NULL){
	
		printf("|%s -> ",temp->pName);
		printf(" %d |",temp->user);
		temp = temp->next;
	}
	printf("\n");
}


void main(){

	ott* head = NULL;

	int node;
	printf("Enter a createnode\n");
	scanf("%d",&node);

	for(int i = 1; i<=node; i++){

		addNode(&head);
	}

	printll(&head);
}
