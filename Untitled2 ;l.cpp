#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	int data;
	 struct node*next;
};
struct node*head =NULL;

void insert (int x){
	
	struct node*temp= (struct node*)malloc(sizeof(struct node*));
	temp->data=x;
	temp->next=head;
	head=temp;
	
	
}

void delete(){
	struct node*temp;
	if (headd==NULL) return;
	temp=head;
	head=head->next;
	free(temp);
	
	
	
	
	
	
}







