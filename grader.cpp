#include <stdio.h>
#include <stdlib.h>

int main()
{//varible declaration 

int hwmark,exmark;
int ovmark;

//intput 
printf("Enter  homework mark \n");
scanf("%d",&hwmark);
printf("Enter  exam mark \n");
scanf("%d ",&exmark);


//calculations
ovmark=((0.25*hwmark)+(0.75*exmark));
 
 //output
 switch(ovmark)
 {
 case '>=75': 
 printf("Mark is %.2g and your grade is A \n",ovmark);
 
}
