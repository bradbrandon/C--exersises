#include <stdio.h>
int sum(int a , int b )
{int sum= a+b;
return  sum;

}


int diff(int a , int b )
{int diff= a-b;
return  diff;

}
int mult(int a , int b )
{int mult= a*b;
return  mult;



}
int div(int a , int b ){

float divi= a/b;

	 
return divi;	}
	 
	 
	 
int main(){
	
	int num1,num2,opt;
	
	printf("division by zero not possible: enter the values again\n ");
	scanf("%d %d",&num1 ,&num2);
	
	
	printf( "  enter :1 for addition  2:subtration 3:difference 4:division\n");
	scanf("%d", &opt);
	
	switch(opt){
		
		case 1:
			printf(" the sum is %d\n",sum(num1, num2));
		case 2:	
		    printf(" the difference is %d\n",diff(num1, num2));
	
			
		case 3:
		    printf(" the the qoetient is %f\n",div(num1, num2));
	
		case 4:
		    printf(" the product  is %d\n",mult(num1, num2));
	
		 default: 
		 printf(" Invalid input\n");
	
	}
	
	 return 0;}
	 
	
	
	
	
	 

		
		
		





