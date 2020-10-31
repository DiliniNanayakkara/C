#include<stdio.h>
#define CAPACITY 5
int queue[CAPACITY];
int i;
int front=0,rear=0;
int Insert();
int Display();
int main(){
		int ch;
	while(ch!=3){
		printf("* * * * * *QUEUE IMPLEMENTATION* * * * * *\n\n");
		printf("1.Insert->\n");
		printf("2.Display->\n");
		printf("3.EXIT->\n");
		printf("\nEnter your Choice-->  ");
		scanf("%d",&ch);
		switch(ch){
			case 1:Insert();
			break;
			
			case 2:Display();
			break;
			default:printf("\n\n# # # # # # \n\nInvalide Argument....\n\n# # # # # # \n\n");
			break;
		}
	}
}


int Insert(){
	if(CAPACITY==rear){
		printf("\n* * * * * * * * * * * * *\nQueue is Full...\n* * * * * * * * * * * * *\n\n");
	}else{
		int ele;
		printf("\nEnter the element---->\n");
		scanf("%d",&ele);
		queue[rear]=ele;
		rear=rear+1;
		printf("\n @ @ @ @ @ @ @ @\n@    Added  %d   @\n @ @ @ @ @ @ @ @\n\n",ele);
	}
	printf("\n\n___________________________________________________________________\n\n\n");
}

int Display(){
	if(front==rear){
		printf("\n\n* * * * * * * * * * * * *\nNo element in the list--->\n* * * * * * * * * * * *\n");
		
	}else{
		printf("Queue Element is --->   \n______________________________\n");
		for(i=0;i<rear;i++){
			printf(" %d /",queue[i]);
		}
		printf("  \n______________________________\n");
	}
	printf("\n\n__________________________________________________________________________\n\n");
}
