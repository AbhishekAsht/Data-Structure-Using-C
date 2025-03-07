int printf(const char* restrict_format,...);
int scanf(const char* restrict_format,...);
#include<stdlib.h>
#include<string.h>
int getchar(void);

typedef struct node{

	char str[20];
	struct node* next;
}node;

node* head  = NULL;

void createNode(){

	node* newNode =(node*)malloc(sizeof(node));
       	printf("Enter a string\n");
	char ch;
	int i = 0;
	while((ch = getchar())!= '\n'){
	
		(*newNode).str[i] = ch;
		i++;
	}
	newNode->next = NULL;

	if(head == NULL){
	
		head = newNode;
	}else{
	
		node* temp = head;

		while(temp->next != NULL){
		
			temp = temp->next;
		}

		temp->next = newNode;
	}
		
}
int count(){

	node* temp = head;
	int count = 0;

	while(temp != NULL){
	
		count++;
		temp = temp->next;
	}

	return count;
}
void printLL(){

	node* temp = head;

	while(temp->next != NULL){
	
		printf("|%s|->",temp->str);
		temp = temp->next;
	}

	printf("|%s|",temp->str);
	printf("\n");
}
void string_l(int num){

	node* temp = head;

	while(temp != NULL){
	
		if(num == strlen(temp->str)){
		
			printf("%s\n",temp->str);
		}

		temp = temp->next;
	}
}
void main(){

	int node;
	printf("Enter a node\n");
	scanf("%d",&node);

	getchar();
	for(int i = 1; i<=node; i++){
	
		createNode();
	}

	printLL();

	int num;
	printf("Enter a num\n");
	scanf("%d",&num);
	string_l(num);
}
