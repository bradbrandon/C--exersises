#include <stdio.h>
#include <stdlib.h>



int  main(){
	//variable declaration
int esum=0,osum=0,i,n,c=0,c1=0,sum;


printf("Enter the number to which you to find the number of even  odd numbers and their sums\n ");
scanf("%d",&n);


for(i=1;i<=n; i++){
if (i%2==0)	{
c++;
esum+=i;
}
else if(i%2!=0){
c1++;
osum+=i;

}


}

printf("The no and sum of  even numbers is%d %d\n",c,esum);
printf("The no and sum of  odd numbers is%d %d\n",c1,osum );





return 0;
}


