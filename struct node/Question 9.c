#include<stdio.h>
#define CAPACITY 5
int cqueue[CAPACITY];
int i;
int front=-1,rear=-1;
int Insert();
int Delete();
int Display();
int main(){
		int ch;
	while(ch!=4){
		printf("* * * * * *QUEUE IMPLEMENTATION* * * * * *\n\n");
		printf("1.Insert->\n");
		printf("2.Delete->\n");
		printf("3.Display->\n");
		printf("4.EXIT->\n");
		printf("\nEnter your Choice-->  ");
		scanf("%d",&ch);
		switch(ch){
			case 1:Insert();
			break;
			case 2:Delete();
			break;
			case 3:Display();
			break;
			default:printf("\n\n# # # # # # \n\nInvalide Argument....\n\n# # # # # # \n\n");
			break;
		}
	}
}


int Insert(){
	int ele;
		printf("\nEnter the element---->\n");
		scanf("%d",&ele);
	if(CAPACITY==rear+1||front==rear+1){
		printf("\n* * * * * * * * * * * * *\nQueue is Full...\n* * * * * * * * * * * * *\n\n");
	}else if(front==-1||rear==-1){
		rear=0;
		front=0;
		cqueue[rear]=ele;
		
		printf("\n @ @ @ @ @ @ @ @\n@    Added  %d   @\n @ @ @ @ @ @ @ @\n\n",ele);
	}else if(rear==CAPACITY-1){
		rear=0;
		cqueue[rear]=ele;
			printf("\n @ @ @ @ @ @ @ @\n@    Added  %d   @\n @ @ @ @ @ @ @ @\n\n",ele);
	}else{
		rear++;
		cqueue[rear]=ele;
			printf("\n @ @ @ @ @ @ @ @\n@    Added  %d   @\n @ @ @ @ @ @ @ @\n\n",ele);
	}
	printf("\n\n___________________________________________________________________\n\n\n");
}
int Delete(){
	int  e;
	if(rear==-1||front==-1){
		printf("\n\n* * * * * * * * * * * * *\nQueue is empty.....\n* * * * * * * * * * * * *\n");
	}else if(rear==front){
		e=cqueue[front];
		front=-1;
		rear=-1;
	}else if(front==CAPACITY-1){
		e=cqueue[front];
		front=0;
		printf("\n\n+ + + + + + + + + +\n%d Deleted......\n+ + + + + + + + + + + +\n\n",cqueue[front]);
	}
	else{
	e=cqueue[front];
	front=front++;
	
	
		
	}
	printf("\n\n__________________________________________________________________________\n\n");
	
}
int Display(){
	if(front==rear){
		printf("\n\n* * * * * * * * * * * * *\nNo element in the list--->\n* * * * * * * * * * * *\n");
		
	}else if(front==0){
		printf("Queue Element is --->   \n______________________________\n");
		for(i=0;i<rear;i++){
			printf(" %d /",cqueue[i]);
		}
		printf("  \n______________________________\n");
	}else{
			printf("Queue Element is --->   \n______________________________\n");
		for(i=front;i<CAPACITY;i++){
			printf(" %d /",cqueue[i]);
		}
		for(i=rear;i<front;i++){
			printf(" %d /",cqueue[i]);
		}
			printf("  \n______________________________\n");
		}
	
	printf("\n\n__________________________________________________________________________\n\n");
}
