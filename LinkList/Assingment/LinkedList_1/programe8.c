int printf(const char* restrict_format,...);
int scanf(const char* restrict_format,...);
#include<stdlib.h>
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
void reverse_s(){

	node* temp = head;
	int count;
	node* temp1 = head;

	while(temp != NULL){

		count = 0;
		int i = 0;
		int j = 0;
		while(temp->str[i] != '\0'){
		
			count++;
			i++;

		}
		temp->str[i]--;
		int a = count/2;
		while(a){
		
			char temp2;
			temp2 = temp->str[i];
			temp->str[i] = temp1->str[j];
			temp1->str[j] = temp2;
			i--;
			j++;
			a--;
		}
		temp = temp->next;
		temp1 = temp1->next;
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

	reverse_s();

	printLL();
}
