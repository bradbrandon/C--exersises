#include <stdio.h>

//Fibonacci series
// f_n = f_{n-1}+f_{n-2}
int fibo(int a){
int fibon;
if (a==0){
	fibon=a;
}
else if (a==1)
{fibon=a;
}

else
 fibon=fibo(a-1)+fibo(a-2);

return fibon;
	
  }


	

int main(){
int i,n;
// input
printf("enter the number to which the series shall be calculated\n");
scanf("%d",&n);
int fiboc[n];
//computation
for(i=0;i<n;i++) {
fiboc[i]=fibo(i);
	

}
// output
printf("the series up to %d is\n :",n);
for(i=0;i<n;i++) {
printf("%d\t",fiboc[i]);}


return 0;}
