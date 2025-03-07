#include<stdio.h>
#include<stdlib.h>
struct Node {

	int data;
	struct Node *Next;
};

typedef struct Node nd;

void main(){

	nd *head = NULL;
	
	nd *Newnode = (nd*)malloc(sizeof(nd));

	Newnode->data = 10;
	Newnode->Next = Newnode;

	head = Newnode;
	
	nd *temp = head;

	Newnode =(nd*)malloc(sizeof(nd));

	Newnode->data = 20;
	head->Next = Newnode;

	Newnode =(nd*)malloc(sizeof(nd));

	Newnode->data = 30;
	head->Next->Next = NULL;

	while(temp != NULL){
	
		printf(" %d ",temp->data);

		temp = temp->Next;
	}
}
