#include <stdio.h>
#include <string.h>





int main(){
char string[1000] ; 
printf("Enter  the string you want to convert to uppercase\n");
scanf("%s",string); 
//gets(string);: function for an entire line
printf("uppercase string is:\n");
printf("%s",strupr(string));
//puts( strupr(string));: function for an entire line

return 0;

}
