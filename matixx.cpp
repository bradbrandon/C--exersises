#include <stdio.h>
int main(){

 int i, j, r ,c ,largest=0, sum=0;
 int a[2][2];

	  

  printf("enter the elements of the array\n");
  
  for (i=0; i<2; i ++){
  	for(j=0; j<2;j++){
  		scanf("%d",&a[i][j]);
	  }
  }
  
  printf("elements of the array are\n");
     for (i=0; i<2; i ++){
     	printf("\n");
     	  for(j=0; j<2;j++){
  		     if(a[i][j]>largest){
  			
  		     	largest=a[i][j];
  			
		        }
  		
  	        	sum+=a[i][j];
  		        printf("\t %d",a[i][j]);
  		    
	  }
	 
	  
  }
   printf("\n the sum of the elements is %d ", sum);
  printf("\n the largest of the elements is %d ", largest);
  
  return  0; }
