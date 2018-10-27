#include<stdio.h>
#include <stdlib.h>


int main(){
int n,i,j, numbers[10000],temp[1000];

//input
printf("Enter the whole number to which the prime numbers will be displayed\n");
scanf("%d",&n);

//calculation and output
printf("\n prime numbers are \t");
for (i=0; i<n;i++)

{ 
numbers[i]=i;
}
for (i=0; i<n;i++)
{

{for (j=0; j<n;j++)
{ if (numbers[i]%2!=0||numbers[i]%3!=0)
{temp[j]=numbers[i];}
 
  

       
}}}

for (j=0; j<n;j++){
printf(" %d\t",temp[j]);	
}
return 0;
}



