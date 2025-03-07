#include<stdio.h>

int rear = -1;
int front = -1;
int size = 0;
int flag = 0;

int enqueue(int* arr){

	if((rear == size-1 && front == 0) || (rear == front - 1)){
	
		return -1;
	}else{
	
		if(front == -1){
		
			front++;
		}else{
		
			if(rear == size -1 && front != 0){

				rear = -1;
			}
		}
		rear++;
		printf("Enter a data\n");
		scanf("%d",&arr[rear]);
		return 0;
	}
}
int dequeue(int* arr){

	if(rear == -1){
	
		flag = 0;
		return -1;
	}else{
	
		flag = 1;
		int val = arr[front];
		if(rear == front){
		
			rear = -1;
			front = -1;
		}else{
		
			if(front == size - 1){
			
				front = -1;
			}
			front++;
		}
		return val;
	}
}
int frontp(int* arr){

	if(front == -1){
	
		flag = 0;
		return -1;
	}else{
	
		flag = 1;
		int val = arr[front];
		return val;
	}
}
int printqueue(int* arr){

	int a,b;
	if(front == -1){

		return -1;
	}else{

		 if(front <= rear){
		
			a = front;
		        b = rear; 	

		 }else if(front > rear){
		 
			 for(int i = front; i<=size-1; i++){
			 
				 printf("%d ",arr[i]);
			 }
			 a = 0;
			 b = rear;
		 }
		 for(int j = a; j<=b; j++){
		 
			 printf("%d ",arr[j]);
		 }
		 printf("\n");
		return 0;
	}
}
void main(){

	char choice;

	printf("Enter a size\n");
	scanf("%d",&size);

	int arr[size];

	do{
	
		printf("1: enqueue\n");
		printf("2: dequeue\n");
		printf("3: frontp\n");
		printf("4: printqueue\n");

		int ch;
		printf("Enter a choice\n");
		scanf("%d",&ch);

		switch(ch){
		
			case 1: {
				int ret = enqueue(arr);
				if(ret == -1)
					printf("queue is full\n");
				}
				break;
			case 2: {
				int ret = dequeue(arr);
				if(flag == 1)
					printf("%d is dequeue\n",ret);
				else
					printf("queue is empty\n");
				}
				break;

			case 3:	{
				 int ret = frontp(arr);
				 if(flag == 1)
					 printf("%d\n",ret);
				 else
					 printf("queue is empty\n");
				}
				break;

			case 4: {
				 int ret = printqueue(arr);
				 if(ret == -1)
					 printf("queue is empty\n");
				}
				break;

			default: printf("Wrong choice\n");
		}
		getchar();
		printf("do you want continue\n");
		scanf("%c",&choice);
	}while(choice == 'Y' || choice == 'y');
}
