#include<stdio.h>
void* malloc(size_t);

typedef struct festiwal{

	char fname[10];

	struct festiwal* next;
}fest;

fest* head = NULL;

void createNode(){

	fest* Newnode = (fest*)malloc(sizeof(fest));

	getchar();

	printf("Enter a fname:\n");
	char ch;
	int i = 0;
	while((ch = getchar()) != '\n'){
	
		Newnode->fname[i] = ch;
		i++;
	}
	Newnode->next = NULL;

	if(head == NULL){
	
		head = Newnode;
	}else{

		fest* temp = head;

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
	
		fest* temp = head;

		while(temp != NULL){
		
			printf("|%s|",temp->fname);
			temp = temp->next;
		}

		printf("\n");

	}
}
void main(){

	int festname;

	printf("Enter a node\n");
	scanf("%d",&festname);

	for(int i = 1; i<=festname; i++){
	
		createNode();
	}
	printll();
	
}
