#include<stdio.h>

int size = 0;
int front = -1;
int rear = -1;
int flag = 0;

int enqueue(int *arr){

	if(rear == size - 1){
	
		return -1;
	}else{
	
		if(front == -1){
		
			front++;
		}
		rear++;
		printf("Enter a data\n");
		scanf("%d",arr+rear);
		return 0;
	}
}

int dequeue(int *arr){

	if(rear == -1){

		flag = 0;
		return -1;
	}else{
	
		flag = 1;
		int val = arr[front];
		if(rear == front){
		
			rear = -1;
			front = -1;
		}
		front++;
		return val;
	}
}

int frontp(int* arr){

	if(rear == -1){
	
		flag = 0;
		return -1;
	}else{
	
		flag = 1;
		int ret = *(arr + front);
		return ret;
	}
}

int printqueue(int* arr){

	if(rear == -1){
	
		return -1;
	}else{
	
		for(int i = front; i<=rear; i++){
		
			printf("%d ",*(arr + i));
		}
		printf("\n");
		return 0;
	}
}
void main(){

	printf("Enter a sizearray\n");
	scanf("%d",&size);

	int arr[size];

	char choice;

	do{
	
		printf("1 :enqueue\n");
		printf("2 :dequeue\n");
		printf("3 :front\n");
		printf("4 :printqueue\n");

		int ch;
		printf("Enter a choice\n");
		scanf("%d",&ch);

		switch(ch){
		
			case 1: {
				   int ret = enqueue(arr);
				   if(ret == -1)
					   printf("Q is Full\n");
				}
				break;

			case 2: {
				  int ret = dequeue(arr);
				  if(flag == 1)
					  printf("%d is dequeue\n",ret);
				  else
					  printf("Q is empty\n");
				}
				break;

			case 3: {
				  int ret = frontp(arr);
				  if(flag == 1)
					  printf("%d\n",ret);
				  else
					  printf("Q is empty\n");
				}
				break;

			case 4: {
				  int ret = printqueue(arr);
				  if(ret == -1)
					  printf("Q is empty\n");
				}
				break;

			default: printf("Wrong choice\n");
		}
		getchar();
		printf("Do you want Continue\n");
		scanf("%c",&choice);
	}while(choice == 'y' || choice == 'Y');
}
