#include <stdio.h>


int main(){
int fact=1, i, n;


printf("enter the value of n\n");	
scanf("%d",&n);

for(i=1; i<=n;i++){
fact*=i	;
	
	
}

printf(" the factorial is %d\n",fact);

return 0;
}
