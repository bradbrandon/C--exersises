//3. Write a program to print Fibonacci series using recursion.
//14. Write a program to convert all lower case to uppercase characters.
//15. Write a program to sort 5 city names in alphabetical order.
//16. Write a program to extract a string.
//Write a program to find greatest of 'n' numbers using functions.
#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(){
//	varibable declaration
	char inputstring[1000];
	int flag;
	
	
    do 	{
	
	// input
	printf("Enter the  lowercase words or sentence you want in uppercase\n");
	gets(inputstring);
	
	
	
	
		//output
		
		
	
	printf("Upper case:\n");
	puts(strupr(inputstring));
printf( "\n enter 1 to continue running and 0 or any other number to exit..................................................\n ");
scanf("%d",&flag);h

	}
	while (flag==1);
	
	return 0;
}
	
	
	
	
