#include<stdio.h>
#define SIZE 5
void push(int);
void pop();
void peek(); 
void display();
void isEmpty();
void isFull();

int Stack[SIZE];
int top=-1;
// body part of push() function
void push(int val){
	// check stack isfull or not
	if(top==SIZE-1){
		printf("STACK IS FULL SO INSERTION NOT POSSIBLE\n");
	}
	else{
		top++;
		Stack[top]=val;
		printf("%d inserted successfully\n",val);
	}
}
//body part for pop() function 
void pop(){
	if(top==-1){
		printf("STACK IS EMPTY SO POP OPERATION NOT POSSSIBLE\n");
	}
	else{
		printf("%d popped successfully\n",Stack[top]);
		top--;
	}
}
// body part for peek() function

void peek(){
	if(top==-1){
		printf("STACK IS EMPTY SO STACK DOES NOT CONTAIN ANY ELEMNET\n");
	}
	else{
		printf("Top of the stack element is %d\n",Stack[top]);
	}
}
//body part of display() function 

void display(){
	if(top==-1){
		printf("Hey your stack does not contain any element so display is not possible\n");
	}
	else{
		int i;
		printf("STACK ELEMENTS ARE : \n");
		for(i=top;i>=0;i--){
			printf("%d\n",Stack[i]);
		}
	}
}
//body part of isEmpty() function 

void isEmpty(){
	if(top==-1){
		printf("YES STACK IS EMPTY\n");
	}
	else{
		printf("STACK IS NOT EMPTY \n");
	}
}
//body part of isFull() function 

void isFull(){
	if(top==SIZE-1){
		printf("STACK IS FULL \n");
	}
	else{
		printf("NO STACK IS NOT FULL\n");
	}
}
int main()
{
	int choice;
	
	while(1){
		printf("Enter your choice \n 1.push\n 2.pop\n 3.peek\n 4.display\n 5.isEmpty\n 6.isFull\n 7.stop\n");
		scanf("%d",&choice);
		
		if(choice==1){
			int val;
			printf("Enter the value to push into the stack\n");
			scanf("%d",&val);
			push(val);
		}
		else if(choice==2){
			pop();
		}
		else if(choice==3){
			peek();
		}
		else if(choice==4){
			display();
		}
		else if(choice==5){
			isEmpty();
		}
		else if(choice==6){
			isFull();
		}
		else{
			break;
		} 
	}		
	return 0;
}

