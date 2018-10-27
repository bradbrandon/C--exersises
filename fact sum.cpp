#include<stdio.h>
#include <stdlib.h>

 int factorial(int a){
 int i,	fact=1 ,result;
 
 for (i=1; i<=num;i++){
 	fact*=i;
 }
 result=fact/num;
 
 
 
 return result;
 }
int validate(int *addr){
	while (*addr==0){
	
	printf(" the number  which you have ented must be greater than 0\n \n enter the number again:\t");
    scanf("%d",&*addr);}
    return *addr;
}
 
 
 
 
 
 int main(){
 	int i, num,sum;
 	
 	printf("Enter the the number to which the factoral sum shall be calculated\n");
 	scanf("%d",&num);
 	
 	validate(&num);
 	
 	for (i=1 ;i<num;i++){
 		sum+=factorial(i);
 		
	 }
	 
	 
	 printf("the sum of the series is %d\n" ,sum);
	 
	 
	 
 	return 0;
 }
