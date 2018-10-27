#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	 struct node*next;
};

struct node*head =NULL;

void insert_at_first(int x){
	
	struct node*temp= (struct node*)malloc(sizeof(struct node*));
	temp->data=x;
	temp->next=head;
	head=temp;
		
}

void delete_head(){
	struct node*temp;
	if (head==NULL) return;
	temp=head;
	head=head->next;
	free(temp);
	
}
	
void delete_position(int n){
	struct node*temp1;
	if (n==1) return;
	temp1=head;
	head=head->next;
	free(temp1);
		
	
	int i;
	for (i=0;i<n-2;i++)
	{temp1 = temp1->next;
	
	struct node *temp2=temp1->next;
	temp1->next= temp2->next;
	free(temp2);
		
	}
}
void search_item(int value)
{
    node *searchNode = head;
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


void insertatn( int data,int n) {
	node* temp1= new node();
	temp1->data= data;
	temp1->next=NULL;
	if (n==1){
		temp1->next=head;
		head=temp1;
		return;
	}
	node*temp2=head;
	for (int i=0; i<n-2;i++){
		temp2=temp2->next;
		
	}temp1->next=temp2->next;
	temp2->next= temp1;
	
	}

	
void sort(){
		
		node *i=head,*j=head;
			int temp;
	
		for (i=head;i->next!=NULL;i=i->next){
		for (j=i->next; j!=NULL;j=j->next)
		if (i->data > j->data){
			temp=i->data;
			i->data=j->data;
			j->data=temp;	
			}
		}
}
		
void reverse() { 
   struct node* prev   = NULL; 
   struct node* current = head;   
   struct node* next; 
 
 
   while (current != NULL) { 
      next  = current->next;   
      current->next = prev;    
      prev = current; 
      current = next; 
   } 
   head = prev; 
} 	

	
	

void print()
{
    printf("\nYour full linked list is\n");

    node *myList;
    myList = head;

    while(myList!=NULL)
    {
        printf("%d ", myList->data);

        myList = myList->next;
    }
    puts("");
}



int main(){
	// insert  at first
	int value;
	node*head=NULL;
	int opt;
	
START: 
	printf("enter 1 to insert\n 2 to delete head\n 3 to delete at position\n 4 to search for an item\n 5 to insert at position\n 6 to sort\n ");
	scanf("%d",&opt);
	
	switch (opt){
	 case 1 :{
		 
	printf("Enter value into the list\n");
	scanf("%d",&value);
	insert_at_first(value);

	print();
	goto START;
	break;
	
	
	}
	case 2 :{
		printf("New list is: \n");
		delete_head();
		print();
		goto START;
		break;
	}
	case 3 :{
		printf("New list is: \n");
		delete_position(value);
		print();
		goto START;
		break;
	}
	case 4 :{
		
	search_item(value);
	goto START;
	break;
	
	}
	case 5 :{
		
	int n;
	printf("Enter the data and position you want to insert at\n ");
	scanf("%d %d",&value,&n);	
	insertatn(value,n);
	print();
	goto START;
	break;
	
	}
	case 6 :{
		
	sort();
	print();
	goto START;
	break;
	
	}

}
return 0;
}
	
