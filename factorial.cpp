#include <stdio.h>
 
 int main(){
 
 
 int  count,n,fact;
 
 printf("enter value of factorial:\t");
 scanf("%d",&fact);
 for (count=0; count<6;count++)
 {fact=fact++;
 }
 printf("factorial value %d ",fact);
 return 0;
}
