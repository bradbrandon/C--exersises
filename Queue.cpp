#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node*link;
};

struct node*front=NULL;
struct node*tail=NULL;

void insert_at_front(){
	struct node*temp=(struct node*)malloc(sizeof(struct node*));
	int data;
	printf("Insert data\n");
	scanf("%d",&data);
	temp->data=data;
	temp->link=NULL;
	front=tail=temp;
}

void insert(){
	struct node*temp=(struct node*)malloc(sizeof(struct node*));
	int data;
	while(1){
	printf("Insert data. If you want to exit, enter -1\n");
	scanf("%d",&data);
	temp->data=data;
	temp->link=NULL;
	tail->link=temp;
	tail=temp;
	if (data==-1)
	break;
}
}

void count(){
	
}

void dequeue(){
	struct node*temp=front;
	if(front==NULL)
	return;
	if(front==tail)
	front =tail=NULL;
	else{
		front=front->link;
	}
	free(temp);
}

void print(){
	printf("\nYour queue is: \n");
	struct node*myList;
	myList=front;
	
	while(myList!=NULL){
		printf("%d",myList->data);
		myList=myList->link;
	}
}

int main(){
	insert_at_front();
	print();
	insert();
	print();
	dequeue();
	print();
	
	
}
