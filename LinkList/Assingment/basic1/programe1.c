#include<stdio.h>
void* malloc(size_t);

typedef struct Mall{

	char mname[10];
	int noofshope;
	float rev;

	struct Mall* next; 
}mall;

mall* head = NULL;

void createNode(){

	mall* Newnode = (mall*)malloc(sizeof(mall));

	getchar();

	printf("Enter a mallName\n");
	char ch;
	int i = 0;
	while((ch = getchar()) != '\n'){
	
		(*Newnode).mname[i] = ch;
		i++;
	}

	printf("Enter a noofshope\n");
	scanf("%d",&Newnode->noofshope);

	printf("Enter a rev\n");
	scanf("%f",&Newnode->rev);

	Newnode->next = NULL;

	if(head == NULL){
	
		head = Newnode;
	}else{
	
		mall* temp = head;

		while(temp->next != NULL){

			temp = temp->next;
		}

		temp->next = Newnode;
	}


}

void printll(){

		mall* temp = head;
	
		while(temp != NULL){
		
			printf("|%s ",temp->mname);
			printf("%d ",temp->noofshope);
			printf("%f|",temp->rev);
			temp = temp->next;
		}

		printf("\n");
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
