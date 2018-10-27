#include <stdio.h>


int main(){
	int i,j,n;
	printf("enter  a number  number to which the pattern shall be calculated\n");
	scanf("%d",&n);
	
	
	for (i=1;i<=9;i++){
	printf(" \n");
	i++;
	for(j=1;j<=i;j+=2){
	
	printf("%d",j);}

	}
	return 0;
}



