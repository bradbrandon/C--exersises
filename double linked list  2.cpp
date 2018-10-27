		#include <stdio.h> 

#include <stdlib.h> 
#include <stdbool.h> 
 
struct node { 
   int data; 
   int key; 
  
   struct node *next; 
   struct node *prev; 
};
//this link always point to first Link  
struct node *head = NULL; 
//this link always point to last Link  
struct node *last = NULL; 
 
struct node *current = NULL; 
 
//is list empty 
bool isEmpty(){ 
   return head == NULL; 
} 
 
int length(){ 
   int length = 0; 
   struct node *current; 
  
   for(current = head; current != NULL; current = current->next){ 
      length++; 
   } 
  
   return length; 
} 
 
//display the list in from first to last 
void displayForward(){ 
 
   //start from the beginning 
   struct node *ptr = head; 
  
   //navigate till the end of the list 
   printf("\n[ "); 
  
   while(ptr != NULL){         
      printf("(%d,%d) ",ptr->key,ptr->data); 
      ptr = ptr->next; 
   } 

 
  
   printf(" ]"); 
} 
 
//display the list from last to first 
void displayBackward(){ 
 
   //start from the last 
   struct node *ptr = last; 
  
   //navigate till the start of the list 
   printf("\n[ "); 
  
   while(ptr != NULL){     
  
      //print data 
      printf("(%d,%d) ",ptr->key,ptr->data); 
   
      //move to next item 
      ptr = ptr ->prev; 
      printf(" "); 
   } 
  
   printf(" ]"); 
} 
 
//insert link at the first location 
void insert(int key, int data){ 
 
   //create a link 
   struct node *link = (struct node*) malloc(sizeof(struct node)); 
   link->key = key; 
   link->data = data; 
  
   if(isEmpty()){ 
      //make it the last link 
      last = link; 
       }else { 
      //update first prev link 
      head->prev = link; 
   } 
 
   //point it to old first link 
   link->next = head; 
  
   //point first to new first link 
   head = link; 
} 
 
//insert link at the last location 
void insertLast(int key, int data){ 
 
   //create a link 
   struct node *link = (struct node*) malloc(sizeof(struct node)); 
   link->key = key; 
   link->data = data; 
  
   if(isEmpty()){ 
      //make it the last link 
      last = link; 
   }else { 
      //make link a new last link 
      last->next = link;      
      //mark old last node as prev of new link 
      link->prev = last; 
   } 
 
   //point last to new last node 
   last = link; 
} 
 
 
 
 

 
 
//delete first item 
struct node* deleteFirst(){    //save reference to first link 
   struct node *tempLink = head; 
  
   //if only one link 
   if(head->next == NULL){ 
      last = NULL; 
   }else { 
      head->next->prev = NULL; 
   } 
  
   head = head->next; 
   //return the deleted link 
   free(tempLink); 
} 
 
//delete link at the last location 
 
struct node* deleteLast(){ 
   //save reference to last link 
   struct node *tempLink = last; 
  
   //if only one link 
   if(head->next == NULL){ 
      head = NULL; 
   }else { 
      last->prev->next = NULL; 
   } 
  
   last = last->prev; 
  
   //return the deleted link 
   free(tempLink); 
} 

 
 
 
 
//delete a link with given key
 
 
struct node * deleten(int key){ 
 
   //start from the first link 
   struct node* current = head; 
   struct node* previous = NULL; 
  
   //if list is empty 
   if(head == NULL){ 
      return NULL; 
   } 
 
   //navigate through list 
   while(current->key != key){ 
      //if it is last node 
   
      if(current->next == NULL){ 
         return NULL; 
      }else { 
         //store reference to current link 
         previous = current; 
    
         //move to next link 
         current = current->next;              
      } 
   } 
 
   //found a match, update the link 
   if(current == head) { 
      //change first to point to next link 
      head = head->next; 
   }else { 
      //bypass the current link 

 
      current->prev->next = current->next; 
   }     
   if(current == last){ 
      //change last to point to prev link 
      last = current->prev; 
   }else { 
      current->next->prev = current->prev; 
   } 
  
   free(current); 
} 
 
bool insertAfter(int key, int newKey, int data){ 
   //start from the first link 
   struct node *current = head;  
  
   //if list is empty 
   if(head == NULL){ 
      return false; 
   } 
 
   //navigate through list 
   while(current->key != key){ 
  
      //if it is last node 
      if(current->next == NULL){ 
         return false; 
      }else {            
         //move to next link 
         current = current->next;              
      } 
   } 
  
   //create a link 
   struct node *newLink = (struct node*) malloc(sizeof(struct node)); 
   newLink->key = key; 
 

 
   newLink->data = data; 
 
 
   if(current == last) { 
      newLink->next = NULL;  
      last = newLink;  
   }else { 
      newLink->next = current->next;          
      current->next->prev = newLink; 
   } 
 
   newLink->prev = current;  
   current->next = newLink;  
   return true;  
}   
int main(){
	int opt;
	int value;
	int value1=0;
	int key;
	int newKey;
START:
	printf("enter 1 to enter values\n 2 to displayforward \n 3 to displaybackward\n 4 to insert after,5 insert last, 6 to deletefirst,7 to deletelast ,8 to deletekey\n" );
	scanf("%d",&opt);
	
	switch (opt){   
	 case 1 :{
	 	
	 	while (value1!=-1){
		 
	printf("Enter values  and keys into the double linked list. If you want to end, enter -1\n");
	
	scanf("%d",&key);
	scanf("%d",&value);
	value1=value;
	insert(key,value);
	
	

	}
	
	goto START;
	break;
	
	
	}
	case 2 :{
		displayForward();
		goto START;
		break;
	}
		case 3:{
		displayBackward();
		goto START;
		break;
		
	}
	case 4:{
		scanf("%d",&key);
		scanf("%d",&newKey);
		scanf("%d",&value);
		
		insertAfter( key, newKey,value);
		displayForward();
		goto START;
		break;
	}/*
	case 5{
		break;
	}
	case 6:{
		break;
	}
	case 7:{
		break;
	}
	case 8:{
		break;
	}
	case 9:{
		break;
	}
*/
	
}
return 0;
}
