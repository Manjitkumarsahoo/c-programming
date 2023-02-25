#include<stdio.h>
#define SIZE 5 
void enQueue(int);
void deQueue();
void display();
void isEmpty();
void isFull();
void peek();

int Queue[SIZE];
int front=-1;
int rear=-1;

// body part for enQueue() function 
void enQueue(int val){
	if(rear==SIZE-1){
		printf("QUEUE IS FULL SO INSERTION NOT POSSIBLE \n");
	}
	else{
		if(front==-1){
			front=0;
		}
		rear++;
		Queue[rear]=val;
		printf("%d enQueued successfully\n",val);	
	}
}

//body part of deQueue() function 
void deQueue(){
	if(front==-1){
		printf("QUEUE IS EMPTY SO DELETION NOT POSSIBLE\n");
	}
	else{
		printf("%d deQueued successfully\n",Queue[front]);
		front++;
		
		if(front>rear){
			front=-1;
			rear=-1;	
		}
	}
}

//body part of display() function 

void display(){
	if(front==-1){
		printf("QUEUE IS EMPTY SO DISPLAY OPERTION NOT POSSIBLE\n");
	}
	else{
		int i;
		printf("\nElemnets of queue are : \n");
		for(i=front;i<=rear;i++){
			printf("%d\n",Queue[i]);
		}
	}
}


//body part of isEmpty() function 
void isEmpty(){
	if(front==-1){
		printf("QUEUE IS EMPTY\n");
	}
	else{
		printf("QUEUE IS NOT EMPTY\n");
	}	
}

//body part of isFull() function 

void isFull(){
	if(rear==SIZE-1){
		printf("QUEUE IS FULL\n");
	}
	else{
		printf("QUEUE IS NOT FULL\n");
	}
}

//body part of peek() function 
void peek(){
	if(front==-1){
		printf("QUEUE IS EMPTY SO PEEK OPERTAION NOT POSSIBLE\n");
	}
	else{
		printf("PEEK ELEMENT IS %d\n",Queue[rear]);
	}
}

int main()
{
	int choice;
	
	while(1){
		printf("Enter your choice \n1.enQueue \n2.deQueue \n3.display \n4.isEmpty \n5.isFull \n6.peek \n7.stop\n");	
		scanf("%d",&choice);
		
		if(choice==1){
			int val;
			printf("Enter the value to insert in queue\n");
			scanf("%d",&val);
			enQueue(val);
		}
		else if(choice==2){
			deQueue();
		}
		else if(choice==3){
			display();
		}
		else if(choice==4){
			isEmpty();
		}
		else if(choice==5){
			isFull();
		}
		else if(choice==6){
			peek();
		}
		else {
			break;
		}
	}	
	
	return 0;
}