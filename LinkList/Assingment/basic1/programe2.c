#include<stdio.h>
void* malloc(size_t);

typedef struct state{

	char sname[10];
	int population;
	float budget;

	struct state* next;
}state;

state* head = NULL;

void createNode(){

	state* Newnode = (state*)malloc(sizeof(state));

	getchar();

	printf("Enter a sname\n");
	char ch;
	int i = 0;
	while((ch = getchar()) != '\n'){
	
		(*Newnode).sname[i] = ch;
		i++;
	}

	printf("Enter a population\n");
	scanf("%d",&Newnode->population);

	printf("Enter a budget\n");
	scanf("%f",&Newnode->budget);

	Newnode->next = NULL;

	if(head == NULL){
	
		head = Newnode;
	}else{
	
		state* temp = head;

		while(temp->next != NULL){
		
			temp = temp->next;
		}

		temp->next = Newnode;
	}
}

int printll(){

	if(head == NULL){
	
		printf("Empty list\n");

		return -1;
	}else{
	
		state* temp = head;

		while(temp != NULL){
		
			printf("|%s->",temp->sname);
			printf("%d->",temp->population);
			printf("%f|",temp->budget);

			temp = temp->next;
		}
			printf("\n");

	}
}
void main(){

	int node;
	printf("Enter a node\n");
	scanf("%d",&node);

	for(int i = 1; i<=node; i++){
	
		createNode();
	}

	printll();

}
