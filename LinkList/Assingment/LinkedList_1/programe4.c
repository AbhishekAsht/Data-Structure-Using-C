int printf(const char* _restrict_format,...);
int scanf(const char* _restrict_format,...);
void* malloc(size_t);
int getchar(void);

typedef struct node{

	int data;
	struct node* next;
}node;

node* head = NULL;

node* createNode(){

	node* newNode = (node*)malloc(sizeof(node));

	printf("Enter a data");
	scanf("%d",&newNode->data);

	newNode->next = NULL;
	
	return newNode;
}

void addNode(){

	node* newNode = createNode();

	if(head == NULL){
	
		head = newNode;
	}else{
	
		node* temp = head;

		while(temp-> != NULL){
		
			temp = temp->next;

		}
		
		temp->next = newNode;
	}

}
void main(){

	printf("1 : addNode\n");
	printf("2 : addFirst\n");
	printf("3 : addAtpos\n");
	printf("4 : addlast\n");
	printf("5 : printll\n");
	printf("6 : delFirst\n");
	printf("7 : delAtpos\n");
	printf("8 : dellast");

	char choice;

	do{
	
		int ch;
		printf("Enter a choice\n");
		scanf("%d",&ch);

		switch(ch){
		
			case 1 : addNode();

			case 2 : addFirst();
			
		        case 3 : {
				 
				  int pos;
			          printf("Enter position\n");
		                  scanf("%d",&pos);
			          addAtpos(pos);
				 }
			case 4 : addlast();

			case 5 : printll();

			case 6 : delFirst();

			case 7 : {
				  int pos1;
			          printf("Enter position\n");
		                  scanf("%d",&pos1);
			          delAtpos(pos1);
				 }

			case 8 : dellast();

			default : printf("Wrong choice\n");
		}
		getchar();
		printf("Do you want countinue\n");
		scanf("%c",&choice);

	}while(choice == 'Y' || choice == 'y');

}
