#include <stdio.h>
#include <string.h>

int main(){
 char string[100];
 char temp[100];
 int flag;
 
 
 printf("Enter the string you want to check is a palidrome\n");
 gets(string);
 
 strcpy(temp,string);
 strrev(string);
 flag=strcmp(string,temp);
 
 if (flag==0){
 printf("The string is palidrome\n");
 
 }
 else{
 printf("The string is not a palidrome\n");
 	
 }
return 0;
 
 
 
 
 
 
 
	
}
