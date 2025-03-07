#include<stdio.h>
#include<stdlib.h>

typedef struct student{

	int id;
	float ht;
	struct student *next;
}stud;


void main(){

	stud *head = NULL;

	stud *newNode = (stud*)malloc(sizeof(stud));

	newNode->id = 1;
	newNode->ht = 4.5f;
	newNode->next = NULL;

	head = newNode;

	newNode =(stud*)malloc(sizeof(stud));

	newNode->id = 2;
	newNode->ht = 5.2f;
	newNode->next = NULL;

	head->next = newNode;

	newNode = (stud*)malloc(sizeof(stud));

	newNode->id = 3;
	newNode->ht = 6.2f;
	newNode->next = NULL;

	head->next->next = newNode;
	
	stud *temp = head;

	while(temp != NULL){
	
		printf("%d ",temp->id);
		printf("%f ",temp->ht);

		temp = temp->next;
	}


}
