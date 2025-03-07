#include<stdio.h>
#include<stdlib.h>
typedef struct demo{

	int data;

	struct demo* next;
}demo;

demo* head = NULL;

void createNode(){

	demo* Newnode = (demo*)malloc(sizeof(demo));

	printf("Enter a data\n");
	scanf("%d",&Newnode->data);

	Newnode->next = NULL;

	if(head == NULL){
	
		head = Newnode;
	}else{
	
		demo* ab = head;

		while(ab->next != NULL){
		
			ab = ab->next;
		}

		ab->next = Newnode;
	}
}

int additionnode(){

	demo* ab = head;

	int add = 0;

	while(ab != NULL){
	
		add = add + ab->data;
		
		ab = ab->next;

	}

	return add;
}

int printll(){

	demo* ab = head;

	if(head == NULL){
	
		printf("Empty list\n");

		return -1;
	}else{
	
		while(ab->next != NULL){
		
			printf("|%d|->",ab->data);
			ab = ab->next;
		}

		printf("|%d|",ab->data);

		printf("\n");
	}
}

int addfl(){

	demo* ab = head;

	int add = 0,a = 1;

		while(ab->next != NULL){

		if(a){
	
			add = add + head->data;
			a = 0;
		}else{
	
			while(ab->next != NULL){

				ab = ab->next;
			}		

			add = add + ab->data;
		}
	}
	
		return add;
}
void main(){

	int node;

	printf("Enter a node\n");
	scanf("%d",&node);

	for(int i = 1; i<=node; i++){
	
		createNode();
	}

	printll();

	int add = additionnode();

	printf("Addition of node is = %d\n",add);

	int add1 = addfl();

	printf("Addition of first node & last node is = %d\n",add1);

}
