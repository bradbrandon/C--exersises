#include <stdio.h>
 
 int main(){
 	//Write a program to find the sum of odd numbers and even numbers up to 'N' numbers.
 
 

 	//vatiable declaration
 	int N, count, temp1, temp2;
 	 temp1=0;
 	 temp2=0;
 	
 	//input
 	printf("Enter the numbber up to which the sum of odd and even numbers shall be calculated\n");
 	scanf("d",&N);
 	
 	
 	// computation
 	
 	
 	for (count=1; count<=N;count++)
 	{
 		printf("Numbers : %d",count);
 		temp2 = count%2;
	 if(temp2 == 0) 
 	    {
 	    	printf("Count : %d",temp2);
		// temp1 += count;
	      }
		  }
	 
	 //output
 //	printf("sums of odd and even numbers are %d, %d respectively\n",temp1, temp2);
 	
 	return 0;
	 }
 	

