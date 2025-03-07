#include<stdio.h>
#include<stdlib.h>

typedef struct movie{

	char mName[20];
	float rat;
	struct movie* next;
}mv;

mv* head = NULL;

void addNode(){

	mv* newNode =(mv*)malloc(sizeof(mv));
	printf("Enter a pName\n");
	fgets(newNode->mName,10,stdin);

	printf("Enter a rating\n");
	scanf("%f",&newNode->rat);

	newNode->next = NULL;
	
	getchar();

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
	
		printf("| %s->",temp->mName);
		printf("%f |",temp->rat);

		temp = temp->next;
	}
}
void main(){

	addNode();
	addNode();
	printll();
}
