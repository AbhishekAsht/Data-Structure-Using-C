#include<stdio.h>
#include<stdlib.h>
typedef struct Company{

	char cName[20];
	int empCount;
	float rev;
	struct Company* next;
}comp;

void addNode(comp** head){

	comp* newNode = (comp*) malloc(sizeof(comp));

	getchar();

	printf("Enter a name\n");
	char ch;int i = 0;

	while((ch = getchar()) != '\n'){
	
		(*newNode).cName[i] = ch;
		i++;
	}

	printf("Enter a coutemp\n");
	scanf("%d",&newNode->empCount);

	printf("Enter a rev\n");
	scanf("%f",&newNode->rev);

        newNode->next = NULL;

	if(*head == NULL){
	
		*head = newNode;
	}else{
	
		comp* temp = *head;

		while(temp->next != NULL){
		
			temp = temp->next;
		}

		temp->next = newNode;
	}
}

void printll(comp** head){

	comp* temp = *head;

	while(temp != NULL){
	
		printf("|%s->",temp->cName);
		printf("%d->",temp->empCount);
		printf("%f|",temp->rev);

		temp = temp->next;
	}
	printf("\n");

}

void main(){

	comp* head = NULL;

	int node;
	printf("Enter a nodeCount\n");
	scanf("%d",&node);

	for(int i = 1; i<=node; i++){
	
		addNode(&head);
	}

	printll(&head);




}
