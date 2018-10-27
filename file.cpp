#include <stdio.h>
#include <conio.h>

int main(){
	//variable declaration
	FILE *fp;
	char ch;
	
	//creating file  and entering data
	*fp= fopen("new.txt","w");
	printf("Enter data");
 while( (ch = getchar()) != EOF) {
    putc(ch,fp);
 }
 fclose(fp);
 fp = fopen("one.txt", "r");
 
 while( (ch = getc(fp)! = EOF)
    printf("%c",ch);
    
 fclose(fp);
 returm 0;
}
