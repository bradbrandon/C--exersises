#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
	/*
	strlen() this function counts the number of characters in a string 
	strcmp() this function compares two strings
	strcat() this function appends one string at the end of other string
	strlwr() this function changes all uppercase charaters in a str to lowercase
	strupr() this function is used to convert string into uppercase
	strrev() this function is used to reverse the string 
	*/
	//using strlen
	
	/*
	strcmp further explained
	
	this takes to arguments ##the strings to be compared and return an integer value
	if the two strings are the same output is zero
	if they are different the ouptput is either negetive or positive
	if negetive the ASCII value of first unmatched character is less than second.
	if positive the ASCII value of first unmatched character is greater than second.
	
	*/
	
	
	
	char *name;
	char *temp;
	int me;
	printf("Enter string to Process: ");
	scanf("%s",name);
	
	int nameLength = strlen(name);
	printf("\n\nThe length is %d", nameLength);
	
	//using strupr
	strupr(name);
	printf("\n\nWith uppercase is %s", name);
	
	//using strlwr
	strlwr(name);
	printf("\n\nWith lowercase is %s", name);
	
	//using strrev
	strrev(name);
	printf("\n\nRevesing it is %s", name);
	
	//using strcat
	strcat(name,temp);
	printf("\n\nThe Concatinated String is is %s", name);
	
	
	
	//code to find out if input is palindrome
	//using strrev to check if palindrome
	//a palindrome is a word that is the same even if reversed
	strcpy(temp,name);
	strrev(name);
	me = strcmpi(name,temp);
	if(me==0)
	{
		printf("The input is a palindrome");
	}
	else
	{
		printf("The input is not a palindrome");
	}
	
	
	return 0;
}
