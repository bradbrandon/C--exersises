#include <stdio.h> 
#include <string.h> 
  
typedef struct Books 
{ 
   char  title[50]; 
   char  author[50]; 
   int year;
   int   id; 
   float price;
} Book; 
  
int main( ) 
{ 
   Book book[100]; 
  int i=0,n;
  
   printf( " enter  the number of book records you want to enter\n");
   scanf("%d",&n);
   printf("enter the title, author name ,year,id ,price\n");
   for (i=0;i<n;i++){
   	scanf("%s",book[i].title);
   	scanf("%s",book[i].author);
   		scanf("%d",&book[i].year);
   			scanf("%d",&book[i].id);
   			scanf("%f",&book[i].price);
			printf("enter next record\n");   }
   	//computation
	  printf("the title of books with prices not higher than 50 and published before 2002 are:\n");		
   for (i=0;i<n;i++){
   	   
    if(book[i].year < 2002 && book[i].price<=50) {
    printf("%s\n",book[i].title);	
    
	}}			
    return 0;}			
   			
   
   
   
