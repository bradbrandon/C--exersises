#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node*next;
	
};
struct node*head=NULL;

void push(int x){
	struct node*temp= (struct node*)malloc(sizeof(struct node*));
	temp->data=x;
	temp->next=head;
	head=temp;}

void pop(){
	
struct node*temp;
	if (head==NULL) return;
	temp=head;
	head=head->next;
	free(temp);
}
	void search(int value)
{
    struct node *searchNode = head;
    int flag = 0;

    while(searchNode!=NULL)
    {
        if(searchNode->data==value)
        {
            printf("%d is present in this stack. Memory address is %d\n", value, searchNode);
            flag = 1;
            break;
        }
        else
            searchNode = searchNode->next;
    }

    if(flag==0)
        printf("Item not found\n");

}

void print(){
    printf("\nYour full stack is\n");

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
	int opt;
	int value;
START: 
	printf("enter 1 to push\n 2 to pop\n 3 to search\n");
	scanf("%d",&opt);
	
	switch (opt){
	 case 1 :{
	 	while (value!=-1){
		 
	printf("Enter values into the stack. If you want to end, enter -1\n");
	scanf("%d",&value);
	push(value);

	}
	pop();
	print();
	goto START;
	break;
	
	
	}
	case 2 :{
		printf("Updated stack is: ");
		pop();
		print();
		goto START;
		break;
	}
		case 3:{
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
