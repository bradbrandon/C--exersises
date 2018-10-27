#include <stdio.h>
#include <string.h>
//our structure defination on top
struct  Mybook{
	char title[100];
	double ISBN;
	char author[100];
	int index;
	float price;
};

int main(){
	struct Mybook B1,B2;
	strcpy(B1.title,"C programming");
	B1.ISBN=1877657987787;
	strcpy(B1.author,"Maposa");
	B1.index=23;
	B1.price=25.5;
	
	
	printf("the book title is %s, the isbn is %f and author is %s, purchase price is %f\n",B1.title,B1.ISBN ,B1.author, B1.price);
	
	
	return 0;
	
	
	
}

