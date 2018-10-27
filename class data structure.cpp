#include <stdio.h>
#include <stdlib.h>


struct node {
	int data;
	struct node * link;
};  
//global pointer
struct node * head = NULL;
// function sign to create the list
void *head_create(int n)
void printlist(node *head);

	

int main(){
  int n;
  printf("\n entr th number of nodes");
  scanf("%d",&n);
  create(n);
  
  

}

//creation of list
head create(int n);{
int i;
struct node*temp = NULL;
struct node*p;
for(i=0;i<n;i++){
printf("\n enter data for node number %d", i+1);
temp = (struct node*)malloc(size of (node));
scanf("%d",&temp->data);
temp -> link = NULL;

if (head == NULL)
head = temp;

else{
	p = head;
	while (p->link != NULL){
		p = p->link;
		p->link=temp;
	}
}
}
return head;

}
void printlist(node*head){
	node*p=NULL;
	if (head==NULL){
		printf("\n Your list is empty");
	}
	
}

