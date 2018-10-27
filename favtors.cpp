#include <stdio.h>
#include <stdlib.h>
#include <cstdlib.>
//global variable common to all functions including main function


void factfind(int num) {
 int c=0,i,facts[1000];
 
 for (i=1;i<=num;i++){
    if (num%i==0){
 	 facts[c]=i;
 	c++;}}
 	
 	// output
 	printf("the factors are:\t");
   
   for(i=0;i<c;i++){
   	
   	printf("%d\t",facts[i]);}
   	
	   }

	





int main(){
  int i,n;
   printf("enter the number for which the factors shall be calculated\n");
   scanf("%d",&n);
   
   
   factfind(n);
      	
   	
   	
   	
   	
   
printf("\nEnter y to make another computation or  any other button to exit program\t");
 char op;
 
errorh: scanf("%c",&op);
 if(op=='y'){
	system("cls");
	
	main();
	
	}
	

	goto errorh;
	
	
	return 0;
	
	

	
	
   
	
}
