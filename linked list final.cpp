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
	void sort(node*head){
		struct node*temp;
		node *i.*j;
		for (i=head;i->next!=NULL;i=i->next)
		{for (j=i->next; j!=NULL;j=j->next)
		if (i->data > j->data){
			temp=i->data;
			i->data=j->data;
			j->data=temp;}
		}
		}
	
int search (node*,int key){
	node *p=head;
	int flag=0;
	int count =1;
	
}	while(p!=NULL){
	if (key==p->data){
		flag=1;
		break;
		
	}
	count++;
	p=p->next;
}
	if(flag==1)
	{return count;
	else
	return -1
	}
	
}	
	
	
}
int count (){
	count=0;
	struct node*p=head;
	while (p->next!=NULL){
		p=p->next;
		count++;
	}
	return count;
	
	
}
}

void insertatn(int dta, int n) {
	
	
}
	
	
}



int main(){
	int search()
