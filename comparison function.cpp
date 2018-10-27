#include <stdio.h>

int max(int a, int b)
{int result;

if (a>b){
result =a;
}

else{
 result=b;
}
return  result;
} 
int main(){
	int num1,num2,mymax;
	 
	 printf("enter the  2 numbers to be compared\n");
	scanf("%d %d",&num1,&num2);
	//  calling andpassing argurments /values to the function
	
	printf("%d is the largest \n",max(num1,num2));
	
	
	return 0;}
	
	
	
	
	
	
	

