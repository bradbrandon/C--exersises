#include <stdio.h>
#include <ctype.h>


int main(){
 int flag;
 char input;
 printf("Enter any character\n");
 
 scanf("%c",&input);
 flag=isdigit(input);	
if (flag>0){
  printf("The character you have entered is a number\n");
  
}	

else{
	printf("The character you have entered is not a number\n");
    
}
return 0;
}
