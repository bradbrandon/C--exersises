#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node*next;
	
};
struct node * front=NULL;
struct node * rear=NULL;

void enqueue(int x){
	
    struct node*temp= (struct node*)malloc(sizeof(struct node*));
	temp->data=x;
	temp->next=NULL;
	
	if (front==NULL && rear==NULL){
		front=rear=temp;
		return;
		}
	rear->next=temp;
	rear=temp;
}

void dequeue(){
	struct node*temp=front;
	if(front==NULL)return;
	if(front==rear){
		front=rear=NULL;
				
	}
	else {
		front=front->next;
		
	}
	free(temp);
	}
	
	void search(int value)
{
    struct node *searchNode = front;
    int flag = 0;

    while(searchNode!=NULL)
    {
        if(searchNode->data==value)
        {
            printf("%d is present in this list. Memory address is %d\n", value, searchNode);
            flag = 1;
            break;
        }
        else
            searchNode = searchNode->next;
    }

    if(flag==0)
        printf("Item not found\n");

}
	void print()
{
    printf("\nYour queue is\n");

    struct node *myList;
    myList = front;

    while(myList!=NULL)
    {
        printf("%d ", myList->data);

        myList = myList->next;
    }
    puts("");
}
void Isempty(){
		if (front==NULL && rear==NULL){
			printf("\n your queue is empty");
			
		
		}
		else {
			printf("\n your queue is not empty");
			
			
		}

}
void frontitem(){
		if (front==NULL && rear==NULL){
			printf("your queue is empty");
			return;
		
		}
		else {
			printf("\n %d",front->data);
			
			
		}

}
int main(){
	int opt;
	int value;
START: 
	printf("\n\n enter 1 to enqueue, 2 to dequeue, 3 to check if the list is empty or 4 to print the first item in the queue, 5 to search\n");
	scanf("%d",&opt);
	
	switch (opt){
	 case 1 :{
	 	while (value!=-1){
		 
	printf("Enter values into the queue. If you want to end, enter -1\n");
	scanf("%d",&value);
	enqueue(value);

	}
	print();
	goto START;
	break;
	
	
	}
	case 2 :{
		printf("dequeued list is: ");
		dequeue();
		print();
		goto START;
		break;
	}
	case 3 :{
		Isempty();
		goto START;
		break;
	}
	case 4 :{
		
	frontitem();
	goto START;
	break;
	
	}
	case 5:{
	int x;
	printf("enter the value to be searched\n");
	scanf("%d",&x);	
	search(x);
	goto START;
	break;
	
	}
}
return 0;
}

	
	

	
	
