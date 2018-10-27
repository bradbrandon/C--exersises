#include <stdio.h>


int main()

{
int ex,cw;
int ov;
printf("Enter Exam Mark & Coursework marks resp\n");
scanf("%d ",&ex);


ov=(ex*0.75 );
 switch(ov)
 {
 	case 7 ... 10:
 		printf("A"); 		
 		break;
 	case 1 ... 6:
 	
 		printf("B");
 		break;
 }

return 0;
}

